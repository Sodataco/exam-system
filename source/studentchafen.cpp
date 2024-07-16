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


//读取信息
QString readUserInfo() {
    QFile file("user_data.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error opening file for reading";
        return QString();
    }

    QTextStream in(&file);
    QString account;
    if (!in.atEnd()) {
        account = in.readLine();
        qDebug() << "Account:" << account;
    }

    file.close();
    return account;
}


void studentchafen::on_examList_itemClicked(QListWidgetItem *item)
{
    QString paperName=item->text();
    ui->testname->setText("试卷名称: "+paperName);

    QSqlQuery query(user_db);

    // 查找 paper_id
    query.prepare("SELECT paper_id FROM papers WHERE paper_name = :paper_name");
    query.bindValue(":paper_name", paperName);

    if (!query.exec()) {
        qDebug() << "Query execution error (get paper_id):" << query.lastError();
    }

    int paper_id = -1;
    QString userID=readUserInfo();
    if (query.next()) {
        paper_id = query.value(0).toInt();
    } else {
        qDebug() << "No paper found for the given paper_name.";
    }

    // 使用 paper_id 和 user_id 查找 score
    query.prepare("SELECT score FROM result WHERE paper_id = :paper_id AND user_id = :user_id");
    query.bindValue(":paper_id", paper_id);
    query.bindValue(":user_id", userID);


    qDebug() << paper_id<<userID<<"10101";

    if (!query.exec()) {
        qDebug() << "Query execution error (get score):" << query.lastError();
    }

    int my_score;
    if (query.next()) {
        my_score= query.value(0).toInt();
    } else {
        qDebug() << "No results found for the given paper_id and user_id.";
    }



    query.finish();


}

