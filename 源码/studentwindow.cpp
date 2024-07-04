#include "studentwindow.h"
#include "ui_studentwindow.h"

studentwindow::studentwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::studentwindow)
{
    ui->setupUi(this);
    ui->findBtn->setStyleSheet(
        "QPushButton {"
        "    border-radius: 15px;"  // 设置圆角半径
        "    border: 2px solid #8f8f91;"  // 设置边框
        "    background-color: #2a82da;"  // 设置背景颜色
        "    color: white;"  // 设置文字颜色
        "    padding: 10px;"  // 设置内边距
        "}"
        "QPushButton:hover {"
        "    background-color: #1e6bb8;"  // 悬停时的背景颜色
        "}"
        "QPushButton:pressed {"
        "    background-color: #144a82;"  // 按下时的背景颜色
        "}"
        );
}

studentwindow::~studentwindow()
{
    delete ui;
}

void studentwindow::receivelogin(){
    this->show();
}


void studentwindow::on_loginagain_clicked()
{
    this->hide();
    emit showmain();
}

void studentwindow::paintEvent(QPaintEvent *){
    paint=new QPainter;
    paint->begin(this);
    paint->setPen(QPen(Qt::darkBlue,3,Qt::DashLine));//设置画笔形式
    paint->setBrush(QBrush(Qt::white,Qt::SolidPattern));//设置画刷形式
    paint->drawLine(320,110,320,440);
    paint->drawLine(320,110,600,110);
    paint->drawLine(320,440,600,440);
    paint->drawLine(600,110,600,440);//矩形绘制

    QFont font;
    font.setPointSize(16);

    paint->setFont(font);
    paint->drawText(350,150,"个人信息：");
    font.setPointSize(13);

    paint->drawText(350,180,"姓名:");
    paint->drawText(350,205,"学号:");
    paint->drawText(350,230,"平均成绩:");

    paint->end();
}







