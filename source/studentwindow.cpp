#include "studentwindow.h"
#include "ui_studentwindow.h"
#include <QDebug>


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
        "    color: ffffff;"  // 设置文字颜色
        "    padding: 10px;"  // 设置内边距
        "}"
        "QPushButton:hover {"
        "    background-color: #1e6bb8;"  // 悬停时的背景颜色
        "}"
        "QPushButton:pressed {"
        "    background-color: #144a82;"  // 按下时的背景颜色
        "}"
        );

    ui->examBtn->setStyleSheet(
        "QPushButton {"
        "    border-radius: 15px;"  // 设置圆角半径
        "    border: 2px solid #8f8f91;"  // 设置边框
        "    background-color: #ffffbb;"  // 设置背景颜色
        "    color: 000000;"  // 设置文字颜色
        "    padding: 10px;"  // 设置内边距
        "}"
        "QPushButton:hover {"
        "    background-color: #ffff77;"  // 悬停时的背景颜色
        "}"
        "QPushButton:pressed {"
        "    background-color: #eeee00;"  // 按下时的背景颜色
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

//退出登录
void studentwindow::on_loginagain_clicked()
{

    this->hide();
    emit showmain();
}

void studentwindow::receiveReturn(){
    this->show();
}


//ui界面调整
void studentwindow::paintEvent(QPaintEvent *){
    QString s1=account;
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

    paint->drawText(425,150,"个人信息");
    font.setPointSize(13);

    paint->drawText(350,180,"姓名:");
    //测试
    //paint->drawText(400,180,getUsername(s1));

    paint->drawText(350,205,"学号:");
    //测试
    paint->drawText(400,205,s1);


    paint->drawText(350,230,"平均成绩:");//文字绘制

    paint->end();
}




void studentwindow::on_findBtn_clicked()
{
    this->hide();
    emit showscore();
}


void studentwindow::on_changePassword_clicked()
{

    this->hide();
    emit showchangePassword();
}


void studentwindow::on_examBtn_clicked()
{
    this->hide();
    emit showeaxm();
}

QString studentwindow::getUsername(const  QString &username) {
    QSqlQuery query(user_db);

    // 使用 SELECT 语句根据账号查询密码
    query.prepare("SELECT name FROM user WHERE zhanghao = :zhanghao");
    query.bindValue(":zhanghao",username);

    if (!query.exec()) {
        qDebug() << "Error querying password:" << query.lastError().text();
        return QString();
    }

    if (query.next()) {
        return query.value(0).toString();
    } else {
        qDebug() << "No password found for username:" << username;
        return QString();
    }

}
