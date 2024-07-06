#include "changepassword.h"
#include "ui_changepassword.h"

changePassword::changePassword(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::changePassword)
{
    ui->setupUi(this);

    //给每个输入框标注内容

    ui->account->setPlaceholderText("账号");
    ui->oldPasserword->setPlaceholderText("旧密码");
    ui->newPassword->setPlaceholderText("新密码");
    ui->newPassword2->setPlaceholderText("再次确认");

}

changePassword::~changePassword()
{
    delete ui;
}

void changePassword::receivelogin(){
    this->show();
}


void changePassword::on_Return_clicked()
{
    // QString s1=ui->newPassword2->text();   QString s2=ui->newPassword2->text();
    // if(s1!=s2){
    //     QMessageBox::warning(this, "no！", "Please keep the old and new passwords consistent.");
    //     return;
    // }这些应该写在完成按钮里
    this->hide();
    emit showstu();
}

