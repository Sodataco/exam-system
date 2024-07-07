#ifndef PAPER_H
#define PAPER_H
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

static QSqlDatabase paper_db;
class paper
{
public:
    paper();
    void build();
};

#endif // PAPER_H
