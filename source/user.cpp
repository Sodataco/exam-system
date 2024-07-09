#include "user.h"

void users::build(){

    if(QSqlDatabase::contains("qt_sql_default_connection"))
        user_db = QSqlDatabase::database("qt_sql_default_connection");
    else
        user_db = QSqlDatabase::addDatabase("QSQLITE");
    user_db.setDatabaseName("user_db.db");
    if(user_db.open()){
        qDebug()<<"user_db数据库已打开";
    }else{
        qDebug() << "无法打开数据库：" << user_db.lastError().text();
    }

    //创建数据表
    QSqlQuery query(user_db);

    query.exec("create table user(zhanghao text UNIQUE,mima text)");

    query.exec("CREATE TABLE papers(paper_id INTEGER PRIMARY KEY AUTOINCREMENT,paper_name TEXT NOT NULL)");


    query.exec("CREATE TABLE IF NOT EXISTS questions ("
               "question_id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "paper_id INTEGER NOT NULL,"
               "question_text TEXT NOT NULL,"
               "FOREIGN KEY (paper_id) REFERENCES papers(paper_id));");


    qDebug()<<"user_db数据库表已创建";

    query.finish();

    return;
}
users::users(){
    build();
}
