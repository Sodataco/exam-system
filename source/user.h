#ifndef USER_H
#define USER_H

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
#include <QTime>

//数据库
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>


//实例化测试
static QSqlDatabase user_db;

class users{
public:
    users();
    void build();
};

#endif // USER_H
