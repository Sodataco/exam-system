#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"user.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui界面的各种调整
    ui->EditAccount->setStyleSheet("QLineEdit { font-size: 16px; } QLineEdit::placeholder { color: gray; font-size: 8px; }");
    ui->EditPassword->setStyleSheet("QLineEdit { font-size: 16px; } QLineEdit::placeholder { color: gray; font-size: 8px; }");

    ui->EditAccount->setPlaceholderText("学号/工号");
    ui->EditPassword->setPlaceholderText("密码");

    QRegularExpression regExp("[^\\s]*");  // 允许除空格外的所有字符

    QRegularExpressionValidator *validator = new QRegularExpressionValidator(regExp, ui->EditAccount);
    ui->EditAccount->setValidator(validator);
    QRegularExpressionValidator *validator2 = new QRegularExpressionValidator(regExp, ui->EditPassword);
    ui->EditPassword->setValidator(validator);

    //默认为"*"
    ui->EditPassword->setEchoMode(QLineEdit::Password);
    ui->eye->setIcon(QIcon(":/image/closeeye.png"));

    connect(this, &MainWindow::showeye, this, &MainWindow::changeeye);
    connect(ui->eye, &QPushButton::clicked, this, &MainWindow::on_eye_clicked);//两个connect实现小眼睛的点击信号和改变功能的

    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked);

    ui->loginButton->setStyleSheet(
        "QPushButton {"
        "    border-radius: 15px;"  // 设置圆角半径
        "    border: 2px solid #8f8f91;"  // 设置边框
        "    background-color: #2a82da;"  // 设置背景颜色
        "    color: white;"  // 设置文字颜色

        "}"
        "QPushButton:hover {"
        "    background-color: #1e6bb8;"  // 悬停时的背景颜色
        "}"
        "QPushButton:pressed {"
        "    background-color: #144a82;"  // 按下时的背景颜色
        "}"
        );

    ui->eye->setStyleSheet(
        "QPushButton {"
        "    border-radius: 15px;"  // 设置圆角半径
        "    background-color: #white;"  // 设置背景颜色
        "    color: white;"  // 设置文字颜色
        "}"
        "QPushButton:hover {"
        "    background-color: #bbffee;"  // 悬停时的背景颜色
        "}"
        "QPushButton:pressed {"
        "    background-color: #00dddd;"  // 按下时的背景颜色
        "}"
        );

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_loginButton_clicked()
{


    QString s1=ui->EditAccount->text(),s2=ui->EditPassword->text();

    if(s1==nullptr || s2==nullptr){
        QMessageBox::warning(this, "Input Error", "The input field cannot be empty.");
        return;
    }
    QSqlQuery query(user_db);
    qDebug()<<"登录账号 = "<<s1<<"  登录密码 = "<<s2;
    query.exec(QString("select* from user where zhanghao = '%1' and mima = '%2'").arg(s1).arg(s2));
    if(query.next() == false){
        return;
    }
    query.finish();



    if(openteacher)emit showteacher();
    else if(openadminister)emit showadminister();
    else if(openstudent)emit showstu();
    else{
        QMessageBox::warning(this, "nonono", "Please choose a idendy.");
        return;
    }
    this->hide();

}//实现登录的页面跳转，释放下一个页面展示的信号

void MainWindow::receiveloginagain(){
    this->show();
}

void MainWindow::on_student_clicked()
{
    openstudent=1;
    openteacher=0;
    openadminister=0;
}//选择登录学生


void MainWindow::on_teacher_clicked()
{
    openteacher=1;
    openstudent=0;
    openadminister=0;
}//选择登录老师


void MainWindow::on_Administrators_clicked()
{
    openadminister=1;
    openstudent=0;
    openteacher=0;
}//选择登录管理员


void MainWindow::on_eye_clicked()
{
    emit showeye(ui->eye->isChecked());
}//槽函数，释放信号


void MainWindow::changeeye(bool checked){
    if(checked){
        ui->EditPassword->setEchoMode(QLineEdit::Normal);
        ui->eye->setIcon(QIcon(":/image/openeye.png"));
    }
    else if(!checked){
        ui->EditPassword->setEchoMode(QLineEdit::Password);
        ui->eye->setIcon(QIcon(":/image/closeeye.png"));
    }
}//eye的check，实现改变
