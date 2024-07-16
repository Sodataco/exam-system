#include "studentwindow.h"
#include "ui_studentwindow.h"
#include <QDebug>


studentwindow::studentwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::studentwindow)
{
    ui->setupUi(this);

    QDate currentDate = QDate::currentDate();
    QString dateString = currentDate.toString("MM-dd");
    QString dayOfWeekString = currentDate.toString("dddd");

    ui->dateLabel->setText("今天是: " + dateString + "\n      " + dayOfWeekString);


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
