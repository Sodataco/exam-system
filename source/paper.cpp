#include "paper.h"

paper::paper() {

     build();
}
void paper::build(){

    paper_db = QSqlDatabase::addDatabase("QSQLITE","paper_db_connection");

    paper_db.setDatabaseName("paper_db");
    if(paper_db.open()){
        qDebug()<<"paper_db数据库已打开";
    }else{
        qDebug() << "无法打开数据库：" << paper_db.lastError().text();
    }


    //创建数据表
    QSqlQuery query(paper_db);


    query.exec("CREATE TABLE papers(paper_id INTEGER PRIMARY KEY AUTOINCREMENT,paper_name TEXT NOT NULL)");


    query.exec("CREATE TABLE IF NOT EXISTS questions ("
                "question_id INTEGER PRIMARY KEY AUTOINCREMENT,"
                "paper_id INTEGER NOT NULL,"
                "question_text TEXT NOT NULL,"
                "FOREIGN KEY (paper_id) REFERENCES papers(paper_id));");


    qDebug()<<"paper_db数据库表已创建";

    query.finish();

    return;

}
