#include "studentexam.h"
#include "ui_studentexam.h"

studentexam::studentexam(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::studentexam)
    , timer(new QTimer(this))
{
    ui->setupUi(this);

    connect(timer, &QTimer::timeout, this, &studentexam::updateCountdown);
    timer->start(1000);  // 每秒更新一次倒计时

    // 设置默认倒计时时间为1分钟（可以根据需要修改）
    setCountdownTime(QTime::currentTime().addSecs(7200));

    // 初始化界面
        currentQuestion = 0;  // 当前题目编号从0开始
        totalQuestions = 25;  // 总题目数量为25

        ui->radioButton_1->setChecked(true);
        // 设置题目文本初始内容

        //最大化界面并且无法调整大小和位置，防止作弊
        this->showFullScreen();
        setWindowFlags(Qt::WindowType::FramelessWindowHint);
        if(question_type[0]==1){
            ui->stackedWidget->setCurrentIndex(0);
            ui->selectquestion_2->setText(question_text[0]);
            ui->chooseA->setText(optionA[0]);
            ui->chooseB->setText(optionA[0]);
            ui->chooseC->setText(optionA[0]);
            ui->chooseD->setText(optionA[0]);

        }
        if(question_type[0]==2){
            ui->stackedWidget->setCurrentIndex(0);
            ui->textquestion_2->setText(question_text[0]);
        }




        // 设置选项按钮初始状态和信号连接
        connect(ui->chooseA, &QCommandLinkButton::clicked, this, &studentexam::onOptionClicked);
        connect(ui->chooseB, &QCommandLinkButton::clicked, this, &studentexam::onOptionClicked);
        connect(ui->chooseC, &QCommandLinkButton::clicked, this, &studentexam::onOptionClicked);
        connect(ui->chooseD, &QCommandLinkButton::clicked, this, &studentexam::onOptionClicked);

        // 初始化题目完成状态和信号连接
        for (int i = 0; i < totalQuestions; ++i) {
            QRadioButton *radioButton = findChild<QRadioButton *>(QString("radioButton_%1").arg(i + 1));
                   if (radioButton) {
                       connect(radioButton, &QRadioButton::clicked, this, &studentexam::onRadioButtonClicked);
                       radioButtons.append(radioButton);  // 将单选按钮添加到列表中
                       questionCompleted.append(false);  // 所有题目初始状态为未完成
                   }
        }

        // 设置进度条的最大值和初始值
        ui->progressBar->setMinimum(0);
        ui->progressBar->setMaximum(totalQuestions);
        updateProgressBar();

        // 连接切换题目按钮的信号与槽
        connect(ui->pushButton, &QPushButton::clicked, this, &studentexam::onPreviousClicked);
        connect(ui->pushButton_2, &QPushButton::clicked, this, &studentexam::onNextClicked);

        // 连接退出按钮的信号与槽
        connect(ui->pushButton_3, &QPushButton::clicked, this, &studentexam::onExitClicked);
}

studentexam::~studentexam()
{
    delete ui;
}
void studentexam::onOptionClicked()
{
    QCommandLinkButton *button = qobject_cast<QCommandLinkButton*>(sender());
    if (button) {
        button->setStyleSheet("background-color: green;");  // 设置选中选项按钮的背景颜色为绿色
    }
}

void studentexam::onRadioButtonClicked()
{
    for (int i = 1; i <= 25; ++i) {
        QString buttonName = QString("radioButton_%1").arg(i);
        QRadioButton *radioButton = findChild<QRadioButton *>(buttonName);

        if (radioButton && radioButton->isChecked()) {
            int index = i - 1;  // 题目索引从0开始，所以需要减1

            // 保存当前题目的答案
            if (question_type[currentQuestion] == 1) {
                // 保存选择题的答案
                QList<QCheckBox*> checkBoxes;
                checkBoxes.append(ui->chooseA);
                checkBoxes.append(ui->chooseB);
                checkBoxes.append(ui->chooseC);
                checkBoxes.append(ui->chooseD);

                for (int j = 0; j < checkBoxes.size(); ++j) {
                    if (checkBoxes[j]->isChecked()) {
                        question_answer[currentQuestion] = QString(QChar('A' + j));  // 保存选中的选项 (A, B, C, D)
                        break;
                    }
                }
            }
            else if (question_type[currentQuestion] == 2 || question_type[currentQuestion] == 3) {
                question_answer[currentQuestion] = ui->answer->toPlainText();
            }

            currentQuestion = index;  // 更新当前选中的题目索引

            if (question_type[index] == 1) {
                // 选择题
                ui->stackedWidget->setCurrentIndex(0);
                ui->selectquestion_2->setText(question_text[index]);
                ui->chooseA->setText(optionA[index]);
                ui->chooseB->setText(optionB[index]);
                ui->chooseC->setText(optionC[index]);
                ui->chooseD->setText(optionD[index]);

                // 清空选择题的选项
                QList<QCheckBox*> checkBoxes;
                checkBoxes.append(ui->chooseA);
                checkBoxes.append(ui->chooseB);
                checkBoxes.append(ui->chooseC);
                checkBoxes.append(ui->chooseD);

                for (auto &checkBox : checkBoxes) {
                    checkBox->setAutoExclusive(false);
                    checkBox->setChecked(false);
                    checkBox->setAutoExclusive(true);
                }

                // 设置之前选中的答案
                if (!question_answer[index].isEmpty()) {
                    char answer = question_answer[index].at(0).toLatin1();
                    if (answer >= 'A' && answer <= 'D') {
                        checkBoxes[answer - 'A']->setChecked(true);
                    }
                }
            } else if (question_type[index] == 2 || question_type[index] == 3) {
                // 填空题
                ui->stackedWidget->setCurrentIndex(1);
                ui->textquestion_2->setText(question_text[index]);

                // 清除文本框并显示新题目的答案
                ui->answer->clear();

                if (!question_answer[index].isEmpty()) {
                    ui->answer->setText(question_answer[index]);
                }

            }

            break;  // 如果找到被选中的单选按钮，跳出循环
        }
    }
}

void studentexam::onPreviousClicked()
{
    if (currentQuestion > 0 && currentQuestion < totalQuestions) {
    currentQuestion=currentQuestion-1;

    ui->selectquestion_2->setText(QString(question_text[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容
    ui->chooseA->setText(QString(optionA[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容
    ui->chooseB->setText(QString(optionB[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容
    ui->chooseC->setText(QString(optionC[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容
    ui->chooseD->setText(QString(optionD[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容

    ui->textquestion_2->setText(QString(question_text[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容

    QRadioButton *buttonToClick = nullptr;
    switch (currentQuestion) {
        case 0:
            buttonToClick = ui->radioButton_1;
            break;
        case 1:
            buttonToClick = ui->radioButton_2;
            break;
        case 2:
            buttonToClick = ui->radioButton_3;
            break;
        case 3:
            buttonToClick = ui->radioButton_4;
            break;
        case 4:
            buttonToClick = ui->radioButton_5;
            break;
        case 5:
            buttonToClick = ui->radioButton_6;
            break;
        case 6:
            buttonToClick = ui->radioButton_7;
            break;
        case 7:
            buttonToClick = ui->radioButton_8;
            break;
        case 8:
            buttonToClick = ui->radioButton_9;
            break;
        case 9:
            buttonToClick = ui->radioButton_10;
            break;
        case 10:
            buttonToClick = ui->radioButton_11;
            break;
        case 11:
            buttonToClick = ui->radioButton_12;
            break;
        case 12:
            buttonToClick = ui->radioButton_13;
            break;
        case 13:
            buttonToClick = ui->radioButton_14;
            break;
        case 14:
            buttonToClick = ui->radioButton_15;
            break;
        case 15:
            buttonToClick = ui->radioButton_16;
            break;
        case 16:
            buttonToClick = ui->radioButton_17;
            break;
        case 17:
            buttonToClick = ui->radioButton_18;
            break;
        case 18:
            buttonToClick = ui->radioButton_19;
            break;
        case 19:
            buttonToClick = ui->radioButton_20;
            break;
        case 20:
            buttonToClick = ui->radioButton_21;
            break;
        case 21:
            buttonToClick = ui->radioButton_22;
            break;
        case 22:
            buttonToClick = ui->radioButton_23;
            break;
        case 23:
            buttonToClick = ui->radioButton_24;
            break;
        case 24:
            buttonToClick = ui->radioButton_25;
            break;
           default:
               // 处理超出范围的情况，这里可以选择不做任何操作或者抛出异常
               break;
       }

       if (buttonToClick) {
           buttonToClick->setChecked(true);  // 设置按钮为选中状态，模拟点击操作
       }
    }
}


void studentexam::onNextClicked()
{
    if (currentQuestion >= 0 && currentQuestion < totalQuestions-1) {
    currentQuestion=currentQuestion+1;

    ui->selectquestion_2->setText(QString(question_text[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示下一题的内容
    ui->chooseA->setText(QString(optionA[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容
    ui->chooseB->setText(QString(optionB[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容
    ui->chooseC->setText(QString(optionC[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容
    ui->chooseD->setText(QString(optionD[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示上一题的内容
    ui->textquestion_2->setText(QString(question_text[currentQuestion + 1]).arg(currentQuestion + 1));  // 在文本浏览器中显示下一题的内容

    QRadioButton *buttonToClick = nullptr;
    switch (currentQuestion) {
        case 0:
            buttonToClick = ui->radioButton_1;
            break;
        case 1:
            buttonToClick = ui->radioButton_2;
            break;
        case 2:
            buttonToClick = ui->radioButton_3;
            break;
        case 3:
            buttonToClick = ui->radioButton_4;
            break;
        case 4:
            buttonToClick = ui->radioButton_5;
            break;
        case 5:
            buttonToClick = ui->radioButton_6;
            break;
        case 6:
            buttonToClick = ui->radioButton_7;
            break;
        case 7:
            buttonToClick = ui->radioButton_8;
            break;
        case 8:
            buttonToClick = ui->radioButton_9;
            break;
        case 9:
            buttonToClick = ui->radioButton_10;
            break;
        case 10:
            buttonToClick = ui->radioButton_11;
            break;
        case 11:
            buttonToClick = ui->radioButton_12;
            break;
        case 12:
            buttonToClick = ui->radioButton_13;
            break;
        case 13:
            buttonToClick = ui->radioButton_14;
            break;
        case 14:
            buttonToClick = ui->radioButton_15;
            break;
        case 15:
            buttonToClick = ui->radioButton_16;
            break;
        case 16:
            buttonToClick = ui->radioButton_17;
            break;
        case 17:
            buttonToClick = ui->radioButton_18;
            break;
        case 18:
            buttonToClick = ui->radioButton_19;
            break;
        case 19:
            buttonToClick = ui->radioButton_20;
            break;
        case 20:
            buttonToClick = ui->radioButton_21;
            break;
        case 21:
            buttonToClick = ui->radioButton_22;
            break;
        case 22:
            buttonToClick = ui->radioButton_23;
            break;
        case 23:
            buttonToClick = ui->radioButton_24;
            break;
        case 24:
            buttonToClick = ui->radioButton_25;
            break;
           default:
               // 处理超出范围的情况，这里可以选择不做任何操作或者抛出异常
               break;
       }

       if (buttonToClick) {
           buttonToClick->setChecked(true);  // 设置按钮为选中状态，模拟点击操作
       }
    }
}

//交卷函数
void studentexam::onExitClicked()
{

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认", "确定要提前交卷吗？",QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No) {
        qDebug() << "User chose to cancel.";
        return;
    }

    QSqlQuery query(user_db);
    int select_num=0;
    for (int i=0;i<25;i++) {
        if(question_answer[i]=="A"||question_answer[i]=="B"||question_answer[i]=="C"||question_answer[i]=="D"){

            query.exec(QString("select* from choice_questions where paper_id = '%1' AND question_text = '%2'").arg(4).arg(question_answer[i]));
            if(query.next() == false){
                query.prepare(QString("INSERT INTO choice_questions (answer) values ('%2')").arg(question_answer[i]));

                qDebug()<<"插入完成2333";
                query.finish();
            }
            if (!query.exec()) {
                qDebug() << "Failed to insert answer:" << query.lastError();
            }
        }
        else {
            select_num=i;
            break;
        }
    }
    for (int i=select_num;i<25;i++) {

        query.exec(QString("select* from tk_questions where paper_id = '%1' AND question_text = '%2'").arg(4).arg(question_answer[i]));
        if(query.next() == false){
            query.prepare(QString("INSERT INTO tk_questions (answer_text) values ('%2')").arg(question_answer[i]));

            qDebug()<<"插入完成2333";
            query.finish();
        }

        if (!query.exec()) {
            qDebug() << "Failed to insert answer:" << query.lastError();
        }
    }

    for(int i=0;i<25;i++){
        qDebug()<<question_answer[i];
    }

    qDebug()<<"select_num="<<select_num;
    this->hide();  // 关闭考试界面
    emit showpreexam();
}

void studentexam::updateProgressBar()
{
    int completedCount = 0;
    for (bool completed : questionCompleted) {
        if (completed) {
            completedCount++;
        }
    }
    ui->progressBar->setValue(completedCount);  // 更新进度条的进度
}

void studentexam::receivelogin(){
    this->show();
}


int studentexam::getquestiontype(const int paperid,QSqlDatabase &db){

    QSqlQuery query(db);
    query.prepare("SELECT question_type FROM kaoshi WHERE paper_id = :paper_id");
    query.bindValue(":paper_id", paperid);


    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError();
        return -1;
    }


    int type;
    while (query.next()) {
        type= query.value(0).toInt();
    }
    qDebug()<<"type是"<<type;
    return type;
}

int studentexam::getquestionid(const int paperid,QSqlDatabase &db){
    QSqlQuery query(db);
    query.prepare("SELECT question_id FROM kaoshi WHERE paper_id = :paper_id");
    query.bindValue(":paper_id", paperid);


    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError();
        return -1;
    }


    int questionid;
    while (query.next()) {
        questionid= query.value(0).toInt();
    }
    qDebug()<<"本张卷子的questionid是"<<questionid;
    return questionid;
}



//根据题目的paper_id来选取对应的题目和type并呈现
void studentexam::displayQuestions(const int paperid,QSqlDatabase &db) {

    int i=0;
    //switch(Type){
    //case 1://选择题case

    ui->stackedWidget->setCurrentIndex(0);

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

        qDebug()<<"进入循环1";
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

        qDebug()<<"进入循环2";
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

}

void studentexam::setCountdownTime(const QTime &time)
{
    endTime = time;
    updateCountdown(); // 立即更新显示
}

//更新倒计时
void studentexam::updateCountdown()
{
    int remainingTime = QTime::currentTime().secsTo(endTime);
    if (remainingTime <= 0)
    {
        ui->countdownLabel->setText("Time's up!");
        timer->stop();
    }
    else
    {
        QTime timeLeft(0, 0);
        timeLeft = timeLeft.addSecs(remainingTime);
        ui->countdownLabel->setText(timeLeft.toString("hh:mm:ss"));
    }
}


