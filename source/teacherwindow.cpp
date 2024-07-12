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
        connect(ui->paper,&QPushButton::clicked,this,&teacherwindow::on_paper_clicked);
        connect(ui->judge,&QPushButton::clicked,this,&teacherwindow::on_judge_clicked);


        connect(ui->manage,&QPushButton::clicked,this,&teacherwindow::on_manage_clicked);



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
        ui->paper->setStyleSheet("QPushButton {"
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
        ui->manage->setStyleSheet("QPushButton {"
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



bool teacherwindow::derive_data_to_sql(QSqlDatabase& db){

    QSqlQuery query(db);
    int s1=1;
    QString s2="实训";
    query.exec(QString("select* from papers where paper_id = '%1'").arg(s1));
    if(query.next() == false){
        query.exec(QString("insert into papers(paper_id,paper_name) values('%1','%2')").arg(s1).arg(s2));
        return true;
    }


    query.exec(QString("insert into questions(question_id,paper_id,question_text) values('%1','%2','%3')").arg(1).arg(1).arg("11"));

    qDebug()<<"121";
    qDebug()<<"插入完成";
    query.finish();
    return true;
}



// 根据paper_id查询paper_name函数
QString teacherwindow::getPaperName(int paperId,QSqlDatabase& db) {

    // 创建SQL查询对象
     QSqlQuery query(db);

    // 准备查询语句，使用参数化查询以防止SQL注入攻击
    query.prepare("SELECT paper_name FROM papers WHERE paper_id = :paperId");
    query.bindValue(":paperId", paperId);

    // 执行SQL查询
    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError();
        return "";
    }

    // 检查是否有结果
    if (query.next()) {
        // 从查询结果中获取paper_name列的值
        QString paperName = query.value(0).toString();
        return paperName;
    } else {
        qDebug() << "No paper found with paper_id =" << paperId;
        return "";
    }

}



//进入创建题库页面
void teacherwindow::on_createquestion_clicked()
{
    this->hide();
    emit showcreatequestion();
}

void teacherwindow::on_manage_clicked()
{
    this->hide();
    emit showmanage();
}
void teacherwindow::on_judge_clicked()
{
    qDebug() << "12312";
}

void teacherwindow::on_Return1_clicked()
{
    qDebug()<<"123";
    this->hide();
    emit showmain();
}








void teacherwindow::on_paper_clicked()
{
    this->hide();
    emit showpaper();
}

