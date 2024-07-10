#include "studentpreexam.h"
#include "ui_studentpreexam.h"

studentpreexam::studentpreexam(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::studentpreexam)
{
    ui->setupUi(this);
}

studentpreexam::~studentpreexam()
{
    delete ui;
}

void studentpreexam::receivelogin(){
    this->show();
}

void studentpreexam::on_Return_clicked()
{
    this->hide();
    emit showstu();
}


void studentpreexam::receiveReturn(){
    this->show();
}



//刷新试卷列表(先注释着)
void studentpreexam::on_refresh_clicked()
{

    // 清空当前列表
    ui->examList->clear();

    // 执行数据库查询

    QSqlQuery query(user_db);
    if (query.exec("select paper_name FROM papers")) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            // 将考试场次添加到QListWidget中
             ui->examList->addItem(examName);
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }

    ui->examList->addItem("12QW3EQ");
    ui->examList->addItem("12QQWE3");

}


//进入试卷界面的逻辑[cry][cry]
void studentpreexam::on_examList_itemClicked(QListWidgetItem *item)
{

    studentexam *s1=new studentexam();
    s1->show();


    qDebug()<<"居然能点";

}

