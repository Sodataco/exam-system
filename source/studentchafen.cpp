#include "studentchafen.h"
#include "ui_studentchafen.h"

studentchafen::studentchafen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentchafen)
{
    ui->setupUi(this);
}

studentchafen::~studentchafen()
{
    delete ui;
}

void studentchafen::receivelogin(){
    this->show();
}

void studentchafen::on_Return_clicked()
{
    this->hide();
    emit showstudent();
}


void studentchafen::on_refresh_clicked()
{
    ui->examList->clear();

    // 清空当前列表
    ui->examList->clear();

    // 执行数据库查询

    QSqlQuery query(user_db);
    if (query.exec("select paper_name FROM papers")) {
        while (query.next()) {
            QString examName = query.value(0).toString();
            // 将考试场次添加到QListWidget中
            ui->examList->addItem(examName);
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }

}


void studentchafen::on_examList_itemClicked(QListWidgetItem *item)
{
    QString paperName=item->text();
    ui->testname->setText("试卷名称: "+paperName);

}

