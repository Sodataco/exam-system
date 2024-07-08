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

