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
QString getNextPaperId(QSqlDatabase &db);
void insertPaperToDatabase(const QString &paperName, QSqlDatabase &db);


//导入并上传
void combinePaper::on_finish_clicked()
{
    QString paperName=ui->title->toPlainText();

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

   insertPaperToDatabase(paperName,user_db);//导入试卷编号

    // 遍历容器中的每一个 QCheckBox*
    for (QCheckBox* checkBox : checkBoxes) {
        // 这里可以访问和使用 checkBox
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
    if (query.exec("select question_text FROM choice_questions")) {
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
QString getNextPaperId(QSqlDatabase &db) {
    QSqlQuery query(db);

    // 查询当前最大的试卷编号
    query.exec("SELECT MAX(paper_id) FROM paper");
    query.next();

    QString lastPaperId = query.value(0).toString();

    // 如果没有试卷编号，则从 1 开始
    if (lastPaperId.isEmpty()) {
        return "10000";
    }

    // 提取编号部分并加一
    int lastNumber = lastPaperId.toInt();
    int nextNumber = lastNumber + 1;

    return QString::number(nextNumber);
}

//插入试卷编号
void insertPaperToDatabase(const QString &paperName, QSqlDatabase &db) {
    // 获取下一个试卷编号
    QString paperId = getNextPaperId(db);

    QSqlQuery query(db);

    // 插入试卷数据到 paper 表
    query.prepare("INSERT INTO paper (paper_id, paper_name) VALUES (:paperId, :paperName)");
    query.bindValue(":paperId", paperId);
    query.bindValue(":paperName", paperName);
    if (!query.exec()) {
        qDebug() << "Error inserting paper:" << query.lastError().text();
        // 在这里处理插入失败的情况
    } else {
        qDebug() << "Inserted paper:" << paperId << paperName;
        // 在这里处理插入成功的情况
    }
}

// //插入试卷编号
// void insertQusetionToPaper(QCheckBox* checkBox, QSqlDatabase &db) {
//     // 获取下一个试卷编号
//     QString paperId = getNextPaperId(db);

//     QSqlQuery query(db);

//     // 插入试卷数据到 paper 表
//     query.prepare("INSERT INTO paper (paper_id, paper_name) VALUES (:paperId, :paperName)");
//     query.bindValue(":paperId", paperId);
//     query.bindValue(":paperName", paperName);
//     if (!query.exec()) {
//         qDebug() << "Error inserting paper:" << query.lastError().text();
//         // 在这里处理插入失败的情况
//     } else {
//         qDebug() << "Inserted paper:" << paperId << paperName;
//         // 在这里处理插入成功的情况
//     }
// }


bool combinePaper::isUse(const QString &username, const QString &Password,QSqlDatabase &db){
    QString s1=username;
    QString s2=Password;
    if(s1==nullptr || s2==nullptr){
        QMessageBox::warning(this, "Input Error", "The input field cannot be empty.");
        return false;
    }

    QSqlQuery query(db);
    qDebug()<<"登录账号 = "<<s1<<"  登录密码 = "<<s2;
    query.exec(QString("select* from user where zhanghao = '%1' and mima = '%2'").arg(s1).arg(s2));
    if(query.next() == false){
        QMessageBox::warning(this, "ERROR", "The account or password is error.");//输入错误提示弹窗
        return false;
    }

    query.finish();

    return true;
}
