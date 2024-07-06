#include "mainwindow.h"
#include"studentwindow.h"
#include"user.h"

#include <QApplication>

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow w;

    w.setFixedSize(560,300);
    w.show();

    w.setWindowTitle("登录");
    w.setWindowIcon(QIcon(":/image/ren.png"));


    studentwindow sw1;
    teacherwindow tea1;
    Administer ad1;
    user u1;

    //connect，实现槽机制的关键
    QObject::connect(&w,SIGNAL(showadminister()),&ad1,SLOT(receivelogin()));
    QObject::connect(&w,SIGNAL(showteacher()),&tea1,SLOT(receivelogin()));
    QObject::connect(&w,SIGNAL(showstu()),&sw1,SLOT(receivelogin()));

    QObject::connect(&sw1,SIGNAL(showmain()),&w,SLOT(receiveloginagain()));


    //ad1.derive_data_to_sql(user_db);//测试函数

    //实现获取文件路径的功能
    QString filePath = QFileDialog::getOpenFileName(nullptr, "选择文件", QDir::homePath(), "Excel 文件 (*.xlsx *.xls)");

    ad1.readAndStoreExcelData(filePath,user_db);

    //ad1.readAndStoreExcelData("D:/pict/exam-system/source/image/工作簿1.xlsx",user_db);



    return a.exec();
}
