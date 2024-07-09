#include "teacherquestion.h"
#include "ui_teacherquestion.h"

teacherquestion::teacherquestion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teacherquestion)
{
    ui->setupUi(this);
}

teacherquestion::~teacherquestion()
{
    delete ui;
}


void teacherquestion::receivelogin(){
    this->show();
}


void teacherquestion::on_questionSelect_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void teacherquestion::on_questionBlank_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void teacherquestion::on_questionAnswer_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}




void teacherquestion::on_Return_clicked()
{
    this->close();
    emit showteacher();
}

//导入选择题
void teacherquestion::on_importSelectquestion_clicked()
{

    //导入题目到数据库功能(待办）


    //清空输入框的内容方便继续导入题目
    ui->selectQ->clear();
    ui->inputA->clear();
    ui->inputB->clear();
    ui->inputC->clear();
    ui->inputD->clear();
    ui->selectA->setChecked(false);
    ui->selectB->setChecked(false);
    ui->selectC->setChecked(false);
    ui->selectD->setChecked(false);

}

