#include "teacherscore.h"
#include "ui_teacherscore.h"

void callPythonScript(const QString &question, int fullScore, const QString &answer, const QString &studentAnswer, int &score, QString &feedback) {
    QProcess process;
    QStringList arguments;
    arguments << "feedback_generator.py" << question << QString::number(fullScore) << answer << studentAnswer;

    process.start("python", arguments);
    process.waitForFinished();

    QString output = process.readAllStandardOutput();
    QStringList outputLines = output.split('\n');

    if (outputLines.size() >= 2) {
        score = outputLines[0].toInt();
        feedback = outputLines[1];
    }
    qDebug()<<"114514";
}


teacherscore::teacherscore(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teacherscore)
{
    ui->setupUi(this);




    ui->text->setText(" ");
    //初始化题目完成状态和信号连接
    for (int i = 0; i < 25; ++i) {
        QRadioButton *radioButton = findChild<QRadioButton *>(QString("radioButton_%1").arg(i + 1));
        if (radioButton) {
            connect(radioButton, &QRadioButton::clicked, this, &teacherscore::onRadioButtonClicked);
            radioButtons.append(radioButton);  // 将单选按钮添加到列表中
            questionCompleted.append(false);  // 所有题目初始状态为未完成
        }
    }

    int s1;
    QString s2;
    callPythonScript("2和3哪个更大",10,"3","3",s1,s2);
    qDebug()<<s1<<s2;

}

teacherscore::~teacherscore()
{
    delete ui;
}




void teacherscore::receivelogin(){
    this->show();

    // 清空当前列表
    ui->paperlist->clear();

    // 执行数据库查询
    QSqlQuery query(user_db);
    if (query.exec("select paper_name FROM papers")) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            // 将考试场次添加到QListWidget中
            ui->paperlist->addItem(examName);
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }
}


void teacherscore::on_paperlist_itemClicked(QListWidgetItem *item)
{

    QString paperName=item->text();
    ui->text->setText("本卷名称： " + paperName);

    QSqlQuery query(user_db);
    query.prepare("SELECT paper_id FROM papers WHERE paper_name = :paper_name");
    query.bindValue(":paper_name", paperName);

    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError();
        return;
    }

    if (!query.next()) {
        qDebug() << "Paper not found:" << paperName;
        return;
    }

    int paperId = query.value(0).toInt();

    qDebug()<<"本张卷子的paperId是"<<paperId;
    this->displayQuestions(paperId,user_db);
}




void teacherscore::onRadioButtonClicked()
{

    for(int i=0;i<10;i++){
        qDebug()<<"question_answer["<<i<<"]:"<<question_answer[i];
        qDebug()<<"correct_answer["<<i<<"]:"<<correct_answer[i];
    }

    for (int i = 1; i <= 25; ++i) {
        QString buttonName = QString("radioButton_%1").arg(i);
        QRadioButton *radioButton = findChild<QRadioButton *>(buttonName);

        qDebug() << "点击了" << i;

        if (radioButton && radioButton->isChecked()) {
            int index = i - 1;  // 题目索引从0开始，所以需要减1

            scores[currentQuestion] = ui->grade->text();

            currentQuestion = index;  // 更新当前选中的题目索引

            ui->grade->setText(scores[index]);

            // 显示新题目
            ui->showquestion->clear();
            ui->showquestion->setText(question_text[index]);

            // if (!question_answer[index].isEmpty()) {
            //     ui->showquestion->append(question_answer[index]);
            // }

            //显示题目的学生的答案
            ui->student_answer->clear();
            ui->student_answer->setText(question_answer[index]);

            // 显示新题目
            ui->correct_answer->clear();
            ui->correct_answer->setText(correct_answer[index]);

            // 清除文本框并显示新题目的给分

            ui->grade->clear();

            if (!scores[index].isEmpty()) {
                ui->grade->setText(scores[index]);
            }


            break;  // 如果找到被选中的单选按钮，跳出循环
        }
    }

    for(int i=0;i<8;i++){
        qDebug()<<"scores="<<scores[i];
    }

}


//获得本张试卷的所有题目，参考答案，学生提交的答案
void teacherscore::displayQuestions(const int paperid,QSqlDatabase &db) {

    paperId=paperid;

    int i=0;

    //获得题目文本和选项文本
    QSqlQuery query(db);
    query.prepare("SELECT question_text,option_a,option_b,option_c,option_d FROM choice_questions WHERE paper_id = :paper_id");
    query.bindValue(":paper_id", paperid);


    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError();
        return;
    }

    QString text;
    QString optA;
    QString optB;
    QString optC;
    QString optD;

    while (query.next()) {

        qDebug()<<"i="<<i;
        text=query.value(0).toString();
        optA=query.value(1).toString();
        optB=query.value(2).toString();
        optC=query.value(3).toString();
        optD=query.value(4).toString();

        question_text[i]=text;
        question_type[i]=1;
        optionA[i]=optA;
        optionB[i]=optB;
        optionC[i]=optC;
        optionD[i]=optD;

        i++;
    }


    query.prepare("SELECT question_text FROM tk_questions WHERE paper_id = :paper_id");
    query.bindValue(":paper_id", paperid);


    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError();
        return;
    }

    while (query.next()) {

        qDebug()<<"i="<<i;
        text=query.value(0).toString();
        question_text[i]=text;
        question_type[i]=2;

        i++;
    }

    query.prepare("SELECT question_text FROM questions WHERE paper_id = :paper_id");
    query.bindValue(":paper_id", paperid);


    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError();
        return;
    }

    while (query.next()) {

        qDebug()<<"进入循环2";
        text=query.value(0).toString();
        question_text[i]=text;
        question_type[i]=3;

        i++;
    }
    i=0;


    //获得学生提交的答案
    int j=0;
    query.prepare("SELECT choice_answer FROM kaoshi WHERE paper_id = :paper_id and user_id = :userId ");
    query.bindValue(":paper_id", paperid);
    query.bindValue(":userId", "121");


    if (!query.exec()) {   
        qDebug() << "Failed to execute query:" << query.lastError();
        return;
    }
    QString answer;

    while (query.next()) {
        qDebug()<<"j="<<j;
        answer=query.value(0).toString();
        question_answer[j]=answer;
        j++;
    }

    query.prepare("SELECT tk_answer FROM kaoshi WHERE paper_id = :paper_id and user_id = :userId ");
    query.bindValue(":paper_id", paperid);
    query.bindValue(":userId", "121");

    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError();
        return;
    }
    int select_num;
    for (int i=0;i<25;i++) {
        if(question_answer[i]=="A"||question_answer[i]=="B"||question_answer[i]=="C"||question_answer[i]=="D"){
        }
        else {
            select_num=i;
            break;
        }
    }

    while (query.next()) {

        answer=query.value(0).toString();
        if(answer!=nullptr){
            question_answer[select_num]=answer;
            select_num++;
            qDebug()<<"answer="<<answer;
        }
    }
    j=0;


    //获得正确答案
    int k=0;
    query.prepare("SELECT answer FROM choice_questions WHERE paper_id = :paper_id ");
    query.bindValue(":paper_id", paperid);


    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError();
        return;
    }
    QString ranswer;

    while (query.next()) {
        ranswer=query.value(0).toString();
        correct_answer[k]=ranswer;
        k++;
    }

    query.prepare("SELECT answer_text FROM tk_questions WHERE paper_id = :paper_id ");
    query.bindValue(":paper_id", paperid);


    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError();
        return;
    }

    while (query.next()) {

        ranswer=query.value(0).toString();
        correct_answer[k]=ranswer;
        k++;
    }
    k=0;

}



void teacherscore::on_returnaAndSave_clicked()
{
    QSqlQuery query(user_db);
    int grade=0;
    for(int i=0;i<25;i++){
        grade+=scores[i].toInt();
    }
    qDebug()<<grade;

    query.prepare("INSERT INTO result (paper_id, user_id, score) VALUES (:paperId, :user_Id, :scores)");
    query.bindValue(":paperId", paperId);
    query.bindValue(":user_Id", "121");
    query.bindValue(":scores", grade);

    if (query.exec()) {
        qDebug() << "插入成功";
    } else {
        qDebug() << "插入失败: " << query.lastError().text();
    }

    query.finish();

    this->hide();
    emit showteacher();

}


