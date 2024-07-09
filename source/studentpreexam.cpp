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


void studentpreexam::on_exam_clicked()
{
    this->hide();
    emit showexam();
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
/*
    QSqlQuery query;
    if (query.exec("select exam FROM exams")) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            // 将考试场次添加到QListWidget中
            examList->addItem(examName);
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }
                                                balabala...        */
    ui->examList->addItem("111");
    ui->examList->addItem("112");
    ui->examList->addItem("113");
    ui->examList->addItem("12EWQ31");
    ui->examList->addItem("12Q23");
    ui->examList->addItem("123243");
    ui->examList->addItem("123");
    ui->examList->addItem("12AD3");
    ui->examList->addItem("12AD3");
    ui->examList->addItem("12ZXC3");
    ui->examList->addItem("12ZXC3");
    ui->examList->addItem("12ZAS3");
    ui->examList->addItem("12S3");
    ui->examList->addItem("1DA2");
    ui->examList->addItem("12ASD");
    ui->examList->addItem("SD123");
    ui->examList->addItem("1AQWEE2");
    ui->examList->addItem("12WQ3");
    ui->examList->addItem("123");
    ui->examList->addItem("1QE2");
    ui->examList->addItem("1E23");
    ui->examList->addItem("12QEQ3");
    ui->examList->addItem("12QEW3");
    ui->examList->addItem("12WEE3");
    ui->examList->addItem("123");
    ui->examList->addItem("1Q23QWE");
    ui->examList->addItem("12WQ3RT");
    ui->examList->addItem("12QW3");
    ui->examList->addItem("12QW3EQ");
    ui->examList->addItem("12QQWE3");

}


//进入试卷界面的逻辑[cry][cry]
void studentpreexam::on_examList_itemClicked(QListWidgetItem *item)
{

    qDebug()<<"居然能点";

}

