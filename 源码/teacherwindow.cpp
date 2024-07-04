#include "teacherwindow.h"
#include "ui_teacherwindow.h"

teacherwindow::teacherwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::teacherwindow)
{
    ui->setupUi(this);
    {
        ui->setupUi(this);
        ui->pushButton->setStyleSheet(
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
        ui->pushButton_2->setStyleSheet(
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
        ui->pushButton_3->setStyleSheet(
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
        ui->pushButton_4->setStyleSheet(
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
}

teacherwindow::~teacherwindow()
{
    delete ui;
}

void teacherwindow::receivelogin(){
    this->show();
}
