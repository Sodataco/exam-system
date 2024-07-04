#include "mainwindow.h"
#include"studentwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setFixedSize(560,400);
    w.show();

    w.setWindowTitle("登录");
    w.setWindowIcon(QIcon(":/image/ren.png"));


    studentwindow sw1;
    teacherwindow tea1;
    Administer ad1;

    QObject::connect(&w,SIGNAL(showadminister()),&ad1,SLOT(receivelogin()));
    QObject::connect(&w,SIGNAL(showteacher()),&tea1,SLOT(receivelogin()));
    QObject::connect(&w,SIGNAL(showstu()),&sw1,SLOT(receivelogin()));


    QObject::connect(&sw1,SIGNAL(showmain()),&w,SLOT(receiveloginagain()));

    return a.exec();
}
