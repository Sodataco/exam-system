#include "user.h"

void user::build(){

    //打开数据库
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


    //创建数据库
    QSqlQuery query(user_db);

    query.exec("create table user(zhanghao text,mima text,phone text)");

    qDebug()<<"user_db数据库表已创建";

    query.finish();

    return;
}
user::user(){
    build();
}
