#include "studentchafen.h"
#include "ui_studentchafen.h"

studentchafen::studentchafen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentchafen)
{
    ui->setupUi(this);
}

studentchafen::~studentchafen()
{
    delete ui;
}

void studentchafen::receivelogin(){
    this->show();
}

void studentchafen::on_Return_clicked()
{
    this->hide();
    emit showstudent();
}


void studentchafen::on_refresh_clicked()
{
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
}

