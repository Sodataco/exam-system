#include "mainwindow.h"
#include"studentwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    studentwindow sw1;
    teacherwindow tea1;


    QObject::connect(&w,SIGNAL(showteacher()),&tea1,SLOT(receivelogin()));
    QObject::connect(&w,SIGNAL(showstu()),&sw1,SLOT(receivelogin()));
    QObject::connect(&sw1,SIGNAL(showmain()),&w,SLOT(receiveloginagain()));

    return a.exec();
}
