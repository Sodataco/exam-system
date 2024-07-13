#include "combinepaper.h"
#include "ui_combinepaper.h"

combinePaper::combinePaper(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::combinePaper)
{
    ui->setupUi(this);

    ui->title->setPlaceholderText("本卷名称");

    // 创建一个当前时刻的QDateTime对象
    QDateTime now = QDateTime::currentDateTime();

    // 打印当前日期和时间（默认本地时区）
    qDebug() << "Current datetime: " << now.toString("yyyy-MM-dd HH:mm:ss.zzz");


}

combinePaper::~combinePaper()
{
    delete ui;
}


void combinePaper::receivelogin(){
    this->show();
}

//函数声明
int getNextPaperId(QSqlDatabase &db);
void insertPaperToDatabase(const QString &paperName, QSqlDatabase &db);


//导入并上传
void combinePaper::on_finish_clicked()
{
    QString paperName=ui->title->toPlainText();
    int classNum=ui->EditClass->text().toInt();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "确定要上传本卷吗?",QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No) {
       qDebug() << "User chose to cancel.";
       return;
    }

    if(paperName==nullptr){
        QMessageBox::warning(this, "Input Error", "=请输入试卷名称");
        return;
    }



    // 遍历容器中的每一个 QCheckBox*
    for (QCheckBox* checkBox : checkBoxes) {

        if (checkBox->isChecked()) {

            QString questionName = checkBox->text();
            // 创建SQL查询对象
            QSqlQuery query(user_db);

            query.exec(QString("update questions set is_use = '%1' where question_text = '%2'").arg(1).arg(questionName));
            query.exec(QString("update tk_questions set is_use = '%1' where question_text = '%2'").arg(1).arg(questionName));
            query.exec(QString("update choice_questions set is_use = '%1' where question_text = '%2'").arg(1).arg(questionName));
            query.finish();


        }
    }


    insertPaperToDatabase(classNum,paperName,user_db);//导入试卷编号

    QDateTime Time=ui->dateTimeEdit->dateTime();// 日期时间
    QTime timelong=ui->timeEdit->time();//考试时长


    this->hide();
    emit showteacher();
    qDebug()<<"你设置的考试时间是"<<Time;
    qDebug()<<"你设置的考试时长是"<<timelong;

}








//取消并退出
void combinePaper::on_Return_clicked()
{
    //退出前询问用户是否保存
    QMessageBox::StandardButton saveOrNot;
    saveOrNot = QMessageBox::question(this, "Confirmation", "Do you want to save this paper?",QMessageBox::Yes | QMessageBox::No);



    if (saveOrNot == QMessageBox::No) {

        ui->questionList->clear();
        ui->disorder->setChecked(false);
        ui->stickanswer->setChecked(false);
        ui->updateimage->setChecked(false);
        ui->dateTimeEdit->clear();
        ui->timeEdit->clear();
        ui->title->clear();

        this->hide();
        emit showteacher();

       return;
    }

    this->hide();
    emit showteacher();
}



void combinePaper::on_Refresh_clicked()
{
    // 清空当前列表
    ui->questionList->clear();

    checkBoxes.clear();

    QSqlQuery   query(user_db);
    //选择
    if (query.exec(QString("select question_text FROM choice_questions where is_use = '%1'").arg(false))) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            QListWidgetItem *item = new QListWidgetItem();
            QCheckBox *checkBox= new QCheckBox ();
            checkBox->setText(examName);
            ui->questionList->addItem(item);//在ListWidget中添加一个条目
            ui->questionList->setItemWidget(item, checkBox);//在这个条目中放置CheckBox

            checkBoxes.append(checkBox);

        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }
    //
    if (query.exec("select question_text FROM questions")) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            QListWidgetItem *item = new QListWidgetItem();
            QCheckBox *checkBox= new QCheckBox ();
            checkBox->setText(examName);
            ui->questionList->addItem(item);//在ListWidget中添加一个条目
            ui->questionList->setItemWidget(item, checkBox);//在这个条目中放置CheckBox

            checkBoxes.append(checkBox);
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }

    if (query.exec("select question_text FROM tk_questions")) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            QListWidgetItem *item = new QListWidgetItem();
            QCheckBox *checkBox= new QCheckBox ();
            checkBox->setText(examName);
            ui->questionList->addItem(item);//在ListWidget中添加一个条目
            ui->questionList->setItemWidget(item, checkBox);//在这个条目中放置CheckBox

            checkBoxes.append(checkBox);
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }

}

//按顺序获得试卷编号
int combinePaper::getNextPaperId(QSqlDatabase &db) {
    QSqlQuery query(db);

    // 查询当前最大的试卷编号
    query.exec("SELECT MAX(paper_id) FROM papers");
    query.next();

    QString lastPaperId = query.value(0).toString();

    // 如果没有试卷编号，则从 10000 开始
    if (lastPaperId.isEmpty()) {
        return 10000;
    }

    // 提取编号部分并加一
    int lastNumber = lastPaperId.toInt();
    int nextNumber = lastNumber + 1;
    query.finish();

    return nextNumber;
}


//插入试卷编号
void combinePaper::insertPaperToDatabase(int class_num,const QString &paperName, QSqlDatabase &db) {
    // 获取下一个试卷编号

    int paperId = getNextPaperId(db);
    qDebug()<<"10086"<<paperId;

    QSqlQuery query(db);

    // 插入试卷数据到 paper 表
    qDebug()<<"111111";
    query.prepare("INSERT INTO papers (paper_id, paper_name) VALUES (:paperId, :paperName)");
    query.bindValue(":paperId", paperId);
    query.bindValue(":paperName", paperName);
    if (!query.exec()) {
        qDebug() << "Error inserting paper:" << query.lastError().text();
        // 在这里处理插入失败的情况
    } else {
        qDebug() << "Inserted paper:" << paperId << paperName;
        // 在这里处理插入成功的情况
    }

    getclass(class_num,paperId);



    query.finish();


}

void combinePaper::getclass(int num,const int &paper_id){

    QSqlQuery query(user_db);

    // 根据is_use字段遍历choice_questions表

    query.prepare("SELECT * FROM class WHERE class_id = :id");
    query.bindValue(":id", num);

    if (!query.exec()) {
        qDebug() << "Failed to fetch class:" << query.lastError();
        return;
    }else {
        qDebug() << "select class:";
        // 在这里处理插入成功的情况
    }

    qDebug() <<"getclass的位置";

    while (query.next()) {
       QString userID = query.value("user_id").toString();
        readandDerivequestion(userID,paper_id);
    }

    query.finish();


    //编号
    clean_is_use(paper_id);

}


void combinePaper::readandDerivequestion(const QString &user_id,const int &paper_id){

     qDebug() <<"read的位置";


     //录入选择题

    QSqlQuery query(user_db);



    query.prepare("SELECT question_id FROM choice_questions WHERE is_use = :isUse");
    query.bindValue(":isUse", true);

    if (!query.exec()) {
        qDebug() << "Error: Failed to execute query -" << query.lastError();
        return;
    }


    while (query.next()) {
        qDebug()<<"进入了";
        int questionId = query.value(0).toInt();

        qDebug() << questionId;

        //向考试table中插入
        query.prepare("INSERT INTO kaoshi (question_id,paper_id,question_type,user_id) VALUES (:question_Id, :paperId, :type, :userId)");

        query.bindValue(":question_Id", questionId);
        query.bindValue(":paperId", paper_id);
        query.bindValue(":type", 1);
        query.bindValue(":userId", user_id);



        if (!query.exec()) {
            qDebug() << "Failed to insert kaoshi:" << query.lastError();
        }




    }


    //录入填空题

    // 根据is_use字段遍历tk_questions表
    query.prepare("SELECT * FROM tk_questions WHERE is_use = :isUse");
    query.bindValue(":isUse", true);

    if (!query.exec()) {
        qDebug() << "Failed to fetch choice_questions:" << query.lastError();
        return;
    }

    while (query.next()) {

        int questionId = query.value("question_id").toInt();

        //向考试table中插入
        query.prepare("INSERT INTO kaoshi (question_id,paper_id,question_type,user_id) VALUES (:question_Id, :paperId, :type, :userId)");
        query.bindValue(":question_Id", questionId);
        query.bindValue(":paperId", paper_id);
        query.bindValue(":type", 2);
        query.bindValue(":userId", user_id);

        if (!query.exec()) {
            qDebug() << "Failed to insert kaoshi:" << query.lastError();
        }

    }



    //录入大题

    // 根据is_use字段遍历questions表
    query.prepare("SELECT * FROM questions WHERE is_use = :isUse");
    query.bindValue(":isUse", true);

    if (!query.exec()) {
        qDebug() << "Failed to fetch choice_questions:" << query.lastError();
        return;
    }

    while (query.next()) {

        int questionId = query.value("question_id").toInt();

        //向考试table中插入
        query.prepare("INSERT INTO kaoshi (question_id,paper_id,question_type,user_id) VALUES (:question_Id, :paperId, :type, :userId)");
        query.bindValue(":question_Id", questionId);
        query.bindValue(":paperId", paper_id);
        query.bindValue(":type", 3);
        query.bindValue(":userId", user_id);

        if (!query.exec()) {
            qDebug() << "Failed to insert kaoshi:" << query.lastError();
        }

    }
    query.finish();


}


void combinePaper::clean_is_use(const int &paper_id){

    QSqlQuery query(user_db);

    qDebug() <<"进来删了";

    query.prepare("UPDATE choice_questions SET paper_id = :newPaperId WHERE is_use = :use");
    query.bindValue(":newPaperId", paper_id);
    query.bindValue(":use", true);

    if (!query.exec()) {
        qDebug() << "Failed to insert kaoshi:" << query.lastError();
    }

    query.prepare("UPDATE questions SET paper_id = :newPaperId WHERE is_use = :use");
    query.bindValue(":newPaperId", paper_id);
    query.bindValue(":use", true);

    if (!query.exec()) {
        qDebug() << "Failed to insert kaoshi:" << query.lastError();
    }

    query.prepare("UPDATE tk_questions SET paper_id = :newPaperId WHERE is_use = :use");
    query.bindValue(":newPaperId", paper_id);
    query.bindValue(":use", true);

    if (!query.exec()) {
        qDebug() << "Failed to insert kaoshi:" << query.lastError();
    }


     query.finish();
}

