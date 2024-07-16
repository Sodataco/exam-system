#include "teachermanage.h"
#include "ui_teachermanage.h"







teachermanage::teachermanage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teachermanage)
{
    ui->setupUi(this);
}

teachermanage::~teachermanage()
{
    delete ui;
}
void teachermanage::on_changegrade_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void teachermanage::on_manage_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void teachermanage::on_Return_clicked()
{
    this->hide();
    emit showteacher();
}
void teachermanage::receivelogin(){
    this->show();
}
