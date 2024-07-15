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
    query.prepare("INSERT INTO choice_questions (paper_id, question_text, option_a, option_b, option_c, option_d, answer,is_use) "
                  "VALUES (:paper_id, :question_text, :option_a, :option_b, :option_c, :option_d, :answer, :use)");
    query.bindValue(":paper_id", 1);
    query.bindValue(":question_text", sQ);
    query.bindValue(":option_a", sA);
    query.bindValue(":option_b", sB);
    query.bindValue(":option_c", sC);
    query.bindValue(":option_d", sD);
    query.bindValue(":answer", bA*1+bB*2+bC*4+bD*8);
    query.bindValue(":use", false);

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
    query.prepare("INSERT INTO tk_questions (paper_id, question_text, answer_text,is_use) "
                  "VALUES (:paper_id, :question_text, :answer_text,:use)");
    query.bindValue(":paper_id", 1);
    query.bindValue(":question_text", sQ);
    query.bindValue(":answer_text", answer);
    query.bindValue(":use", false);

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

void teacherquestion::importChoiceQuestions(const QString &filePath, QSqlDatabase &db) {
    QAxObject excel("Excel.Application");
    QAxObject *workbooks = excel.querySubObject("Workbooks");
    QAxObject *workbook = workbooks->querySubObject("Open(const QString&)", filePath);
    QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1); // 假设选择题在第一个工作表

    QAxObject *usedRange = worksheet->querySubObject("UsedRange");
    QAxObject *rows = usedRange->querySubObject("Rows");
    int rowCount = rows->property("Count").toInt();

    QSqlQuery query(db);
    query.exec("CREATE TABLE IF NOT EXISTS choice_questions ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "question TEXT, "
               "option1 TEXT, "
               "option2 TEXT, "
               "option3 TEXT, "
               "option4 TEXT, "
               "correct_answer TEXT)");

    for (int i = 2; i <= rowCount; ++i) { // 从第二行开始，假设第一行为标题
        QString question = worksheet->querySubObject("Cells(int,int)", i, 1)->dynamicCall("Value()").toString();
        QString option1 = worksheet->querySubObject("Cells(int,int)", i, 2)->dynamicCall("Value()").toString();
        QString option2 = worksheet->querySubObject("Cells(int,int)", i, 3)->dynamicCall("Value()").toString();
        QString option3 = worksheet->querySubObject("Cells(int,int)", i, 4)->dynamicCall("Value()").toString();
        QString option4 = worksheet->querySubObject("Cells(int,int)", i, 5)->dynamicCall("Value()").toString();
        QString correctAnswer = worksheet->querySubObject("Cells(int,int)", i, 6)->dynamicCall("Value()").toString();

        query.prepare("INSERT INTO choice_questions (question, option1, option2, option3, option4, correct_answer) "
                      "VALUES (:question, :option1, :option2, :option3, :option4, :correct_answer)");
        query.bindValue(":question", question);
        query.bindValue(":option1", option1);
        query.bindValue(":option2", option2);
        query.bindValue(":option3", option3);
        query.bindValue(":option4", option4);
        query.bindValue(":correct_answer", correctAnswer);

        if (!query.exec()) {
            qDebug() << "Error inserting choice question:" << query.lastError();
        }
    }

    workbook->dynamicCall("Close()");
    excel.dynamicCall("Quit()");
}


void teacherquestion::importFillBlankQuestions(const QString &filePath, QSqlDatabase &db) {
    QAxObject excel("Excel.Application");
    QAxObject *workbooks = excel.querySubObject("Workbooks");
    QAxObject *workbook = workbooks->querySubObject("Open(const QString&)", filePath);
    QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 2); // 假设填空题在第二个工作表

    QAxObject *usedRange = worksheet->querySubObject("UsedRange");
    QAxObject *rows = usedRange->querySubObject("Rows");
    int rowCount = rows->property("Count").toInt();

    QSqlQuery query(db);
    query.exec("CREATE TABLE IF NOT EXISTS fill_blank_questions ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "question TEXT, "
               "correct_answer TEXT)");

    for (int i = 2; i <= rowCount; ++i) { // 从第二行开始，假设第一行为标题
        QString question = worksheet->querySubObject("Cells(int,int)", i, 1)->dynamicCall("Value()").toString();
        QString correctAnswer = worksheet->querySubObject("Cells(int,int)", i, 2)->dynamicCall("Value()").toString();

        query.prepare("INSERT INTO fill_blank_questions (question, correct_answer) "
                      "VALUES (:question, :correct_answer)");
        query.bindValue(":question", question);
        query.bindValue(":correct_answer", correctAnswer);

        if (!query.exec()) {
            qDebug() << "Error inserting fill blank question:" << query.lastError();
        }
    }

    workbook->dynamicCall("Close()");
    excel.dynamicCall("Quit()");
}



void teacherquestion::on_importSelectquestion_2_clicked()
{
    //实现获取文件路径的功能
    QString filePath = QFileDialog::getOpenFileName(nullptr, "选择文件", QDir::homePath(), "Excel 文件 (*.xlsx *.xls)");

    if(!filePath.isEmpty()){
        this->importChoiceQuestions(filePath,user_db);

        QMessageBox::about(this, "棒", "Successfully import Excel.");
    }
    else{
        QMessageBox::critical(this, "Damn", "Failed to import Excel.");
    }

}


void teacherquestion::on_importBlankquestion_2_clicked()
{
    //实现获取文件路径的功能
    QString filePath = QFileDialog::getOpenFileName(nullptr, "选择文件", QDir::homePath(), "Excel 文件 (*.xlsx *.xls)");

    if(!filePath.isEmpty()){
        this->importFillBlankQuestions(filePath,user_db);

        QMessageBox::about(this, "棒", "Successfully import Excel.");
    }
    else{
        QMessageBox::critical(this, "Damn", "Failed to import Excel.");
    }
}


void teacherquestion::on_importAnswerquestion_2_clicked()
{
    //实现获取文件路径的功能
    QString filePath = QFileDialog::getOpenFileName(nullptr, "选择文件", QDir::homePath(), "Excel 文件 (*.xlsx *.xls)");

    if(!filePath.isEmpty()){
        this->importFillBlankQuestions(filePath,user_db);

        QMessageBox::about(this, "棒", "Successfully import Excel.");
    }
    else{
        QMessageBox::critical(this, "Damn", "Failed to import Excel.");
    }
}

