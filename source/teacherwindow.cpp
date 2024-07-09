#include "teacherwindow.h"
#include "ui_teacherwindow.h"

teacherwindow::teacherwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::teacherwindow)
{
    ui->setupUi(this);
    {
        ui->setupUi(this);

        //页面控件和函数的连接
        connect(ui->Return1,&QPushButton::clicked,this,&teacherwindow::on_Return1_clicked);
        connect(ui->createquestion,&QPushButton::clicked,this,&teacherwindow::on_createquestion_clicked);
        //connect(ui->Return1,&QPushButton::clicked,this,&teacherwindow::on_Return1_clicked);
        connect(ui->judge,&QPushButton::clicked,this,&teacherwindow::on_judge_clicked);
        //connect(ui->Return1,&QPushButton::clicked,this,&teacherwindow::on_Return1_clicked);


        ui->createquestion->setStyleSheet("QPushButton {"
                                          "    border-radius: 15px;"       // 设置圆角半径
                                          "    border: 2px solid #8f8f91;" // 设置边框
                                          "    background-color: #2a82da;" // 设置背景颜色
                                          "    color: white;"              // 设置文字颜色
                                          "    padding: 10px;"             // 设置内边距
                                          "}"
                                          "QPushButton:hover {"
                                          "    background-color: #1e6bb8;" // 悬停时的背景颜色
                                          "}"
                                          "QPushButton:pressed {"
                                          "    background-color: #144a82;" // 按下时的背景颜色
                                          "}");
        ui->pushButton_2->setStyleSheet("QPushButton {"
                                        "    border-radius: 15px;"       // 设置圆角半径
                                        "    border: 2px solid #8f8f91;" // 设置边框
                                        "    background-color: #2a82da;" // 设置背景颜色
                                        "    color: white;"              // 设置文字颜色
                                        "    padding: 10px;"             // 设置内边距
                                        "}"
                                        "QPushButton:hover {"
                                        "    background-color: #1e6bb8;" // 悬停时的背景颜色
                                        "}"
                                        "QPushButton:pressed {"
                                        "    background-color: #144a82;" // 按下时的背景颜色
                                        "}");
        ui->judge->setStyleSheet("QPushButton {"
                                 "    border-radius: 15px;"       // 设置圆角半径
                                 "    border: 2px solid #8f8f91;" // 设置边框
                                 "    background-color: #2a82da;" // 设置背景颜色
                                 "    color: white;"              // 设置文字颜色
                                 "    padding: 10px;"             // 设置内边距
                                 "}"
                                 "QPushButton:hover {"
                                 "    background-color: #1e6bb8;" // 悬停时的背景颜色
                                 "}"
                                 "QPushButton:pressed {"
                                 "    background-color: #144a82;" // 按下时的背景颜色
                                 "}");
        ui->pushButton_4->setStyleSheet("QPushButton {"
                                        "    border-radius: 15px;"       // 设置圆角半径
                                        "    border: 2px solid #8f8f91;" // 设置边框
                                        "    background-color: #2a82da;" // 设置背景颜色
                                        "    color: white;"              // 设置文字颜色

                                        "}"
                                        "QPushButton:hover {"
                                        "    background-color: #1e6bb8;" // 悬停时的背景颜色
                                        "}"
                                        "QPushButton:pressed {"
                                        "    background-color: #144a82;" // 按下时的背景颜色
                                        "}");
    }
}

teacherwindow::~teacherwindow()
{
    delete ui;
}

void teacherwindow::receivelogin()
{
    this->show();
}

bool teacherwindow::derive_data_to_sql(QSqlDatabase &db)
{
    QSqlQuery query(db);
    QString s1 = "111";
    QString s2 = "111";
    qDebug() << "111";

    query.exec(QString("insert into papers(paper_id,paper_name) values('%1','%2')").arg(s1).arg(s2));
    query.exec(
        QString("insert into questions(question_id,paper_id,question_text) values('%1','%2','%3')")
            .arg("11")
            .arg("11")
            .arg("11"));

    qDebug() << "111";
    qDebug() << "插入完成";
    query.finish();
    return true;
}

//进入创建题库页面
void teacherwindow::on_createquestion_clicked()
{
    this->hide();
    emit showcreatequestion();
}

void teacherwindow::on_judge_clicked()
{
    qDebug() << "12312";
}

void teacherwindow::on_Return1_clicked()
{
    this->hide();
    emit showmain();
}






