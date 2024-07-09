#include "mainwindow.h"
#include"studentwindow.h"
#include"user.h"
#include"paper.h"
#include"studentchafen.h"
#include"studentchafen.h"
#include"changepassword.h"
#include"studentpreexam.h"
#include"studentexam.h"
#include"teacherquestion.h"


#include <QApplication>

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow w;
    studentwindow sw1;
    teacherwindow tea1;
    Administer ad1;
    studentchafen cha1;
    changePassword cP1;
    studentpreexam spe1;
    studentexam se1;
    teacherquestion tq;
    user u1;

    w.setFixedSize(560,300);
    w.show();
    //tea1.show();

    w.setWindowTitle("登录");
    w.setWindowIcon(QIcon(":/image/ren.png"));

    sw1.setWindowTitle("爱考试");
    sw1.setWindowIcon(QIcon(":/image/pencil"));

    cP1.setWindowTitle("修改密码");

    ad1.setFixedSize(900,450);

    //connect，实现槽机制的关键
    QObject::connect(&w,SIGNAL(showadminister()),&ad1,SLOT(receivelogin()));
    QObject::connect(&w,SIGNAL(showteacher()),&tea1,SLOT(receivelogin()));
    QObject::connect(&w,SIGNAL(showstu()),&sw1,SLOT(receivelogin()));
    QObject::connect(&sw1,SIGNAL(showscore()),&cha1,SLOT(receivelogin()));
    QObject::connect(&sw1,SIGNAL(showchangePassword()),&cP1,SLOT(receivelogin()));
    QObject::connect(&sw1,SIGNAL(showeaxm()),&spe1,SLOT(receivelogin()));
    QObject::connect(&spe1,SIGNAL(showexam()),&se1,SLOT(receivelogin()));
    QObject::connect(&tea1,SIGNAL(showcreatequestion()),&tq,SLOT(receivelogin()));



    QObject::connect(&cha1,SIGNAL(showstudent()),&sw1,SLOT(receiveReturn()));
    QObject::connect(&spe1,SIGNAL(showstu()),&sw1,SLOT(receiveReturn()));
    QObject::connect(&cP1,SIGNAL(showstu()),&sw1,SLOT(receiveReturn()));
    QObject::connect(&se1,SIGNAL(showpreexam()),&spe1,SLOT(receiveReturn()));
    QObject::connect(&ad1,SIGNAL(showmain()),&w,SLOT(receiveloginagain()));
    QObject::connect(&sw1,SIGNAL(showmain()),&w,SLOT(receiveloginagain()));
    QObject::connect(&tq,SIGNAL(showteacher()),&tea1,SLOT(receivelogin()));

    QObject::connect(&tea1,SIGNAL(showmain()),&w,SLOT(receiveloginagain()));


    ad1.derive_data_to_sql(user_db);//测试函数
    tea1.derive_data_to_sql(paper_db);




    return a.exec();
}
