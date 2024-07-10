#include "teacherquestion.h"
#include "ui_teacherquestion.h"

teacherquestion::teacherquestion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teacherquestion)
{
    ui->setupUi(this);
}

teacherquestion::~teacherquestion()
{
    delete ui;
}


void teacherquestion::receivelogin(){
    this->show();
}


void teacherquestion::on_questionSelect_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void teacherquestion::on_questionBlank_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void teacherquestion::on_questionAnswer_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void teacherquestion::on_Return_clicked()
{
    this->close();
    emit showteacher();
}

//导入选择题
void teacherquestion::on_importSelectquestion_clicked()
{
    QString sQ=ui->inputsQ->toPlainText();//题目内容

    QString sA=ui->inputA->toPlainText();
    QString sB=ui->inputB->toPlainText();
    QString sC=ui->inputC->toPlainText();
    QString sD=ui->inputD->toPlainText();

    bool bA=ui->selectA->isChecked();
    bool bB=ui->selectB->isChecked();
    bool bC=ui->selectC->isChecked();
    bool bD=ui->selectD->isChecked();

    //导入题目到数据库功能

    QSqlQuery query(user_db);
    // 使用 INSERT INTO 语句插入选择题数据
    query.prepare("INSERT INTO choice_questions (paper_id, question_text, option_a, option_b, option_c, option_d, answer) "
                  "VALUES (:paper_id, :question_text, :option_a, :option_b, :option_c, :option_d, :answer)");
    query.bindValue(":paper_id", 1);
    query.bindValue(":question_text", sQ);
    query.bindValue(":option_a", sA);
    query.bindValue(":option_b", sB);
    query.bindValue(":option_c", sC);
    query.bindValue(":option_d", sD);
    query.bindValue(":answer", bA*1+bB*2+bC*4+bD*8);

    if (!query.exec()) {
        qDebug() << "Error inserting choice question:" << query.lastError().text();
    } else {
        qDebug() << "Choice question inserted successfully.";
    }


    //清空输入框的内容方便继续导入题目
    ui->inputsQ->clear();
    ui->inputA->clear();
    ui->inputB->clear();
    ui->inputC->clear();
    ui->inputD->clear();
    ui->selectA->setChecked(false);
    ui->selectB->setChecked(false);
    ui->selectC->setChecked(false);
    ui->selectD->setChecked(false);

}




void teacherquestion::on_importBlankquestion_clicked()
{
    QString sQ=ui->inputbQ->toPlainText();//题目内容
    QString answer=ui->blankAnswer->toPlainText();

    QSqlQuery query(user_db);

    // 使用 INSERT INTO 语句插入填空题数据
    query.prepare("INSERT INTO tk_questions (paper_id, question_text, answer_text) "
                  "VALUES (:paper_id, :question_text, :answer_text)");
    query.bindValue(":paper_id", 1);
    query.bindValue(":question_text", sQ);
    query.bindValue(":answer_text", answer);

    if (!query.exec()) {
        qDebug() << "Error inserting fill-in-the-blank question:" << query.lastError().text();
    } else {
        qDebug() << "Fill-in-the-blank question inserted successfully.";
    }




    ui->inputbQ->clear();
    ui->blankAnswer->clear();
}


void teacherquestion::on_importAnswerquestion_clicked()
{
    QString sQ=ui->inputaQ->toPlainText();
    QString answer=ui->answerAnswer->toPlainText();

    //导入试题
    QSqlQuery query(user_db);

    // 使用 INSERT INTO 语句插入数据到 questions 表
    query.prepare("INSERT INTO questions (paper_id, question_text, answer_text) "
                  "VALUES (:paper_id, :question_text, :answer_text)");
    query.bindValue(":paper_id", 1);
    query.bindValue(":question_text", sQ);
    query.bindValue(":answer_text", answer);

    if (!query.exec()) {
        qDebug() << "Error inserting question:" << query.lastError().text();
    } else {
        qDebug() << "Question inserted successfully.";
    }


    ui->inputaQ->clear();
    ui->answerAnswer->clear();
}

