#ifndef SIGNIN_H
#define SIGNIN_H

#include <QWidget>

#include <QAction>
#include <QApplication>
#include <QComboBox>
#include <QCheckBox>
#include <QDebug>
#include <QFont>
#include <QFile>
#include <QFileInfo>
#include <QIcon>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QMouseEvent>
#include <QMenu>
#include <QMovie>
#include <QPushButton>
#include <QPoint>
#include <QScreen>
#include <QSystemTrayIcon>
#include <QToolButton>
#include <synchapi.h>
#include <QTime>

//数据库
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>


class signin
{
public:
    signin();
    ~signin();

    //外部文件
    QSqlDatabase user_db;
    QFile* file;    //写入账号信息的文件

    QLineEdit* line1;       //账号登录
    QComboBox* combobox1;       //editline控件后面放个combobox（主要是为了下拉控件）

    QLineEdit* line2;   //密码登录
    QComboBox* combobox2;



    //函数实现
    void open_and_create_Sql(QSqlDatabase& db,const QString connectionName,const QString SQLName);//打开并创建数据库
    void in();


};

#endif // SIGNIN_H
