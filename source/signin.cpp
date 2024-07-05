#include "signin.h"

signin::signin() {}

void signin::open_and_create_Sql(QSqlDatabase& db,const QString connectionName,const QString SQLName)
{
    //打开数据库
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE",connectionName);
    db.setDatabaseName(SQLName+".db");
    if(db.open()){
        qDebug()<<SQLName+"_db数据库已打开";
    }else{

        return;
    }
    //创建数据库
    QSqlQuery query(user_db);
    //避免表重复创建
    query.exec("select * from user");
    if(query.next() == false){
        //设置账号、密码、手机号即可
        query.exec("create table user(zhanghao text,mima text,phone text)");
        qDebug()<<"user_db数据库表已创建";
    }else{
        qDebug()<<"user_db数据库表已存在,无需创建";
        //QMessageBox::information(this,"警告","user_db数据库表已存在,无需创建",QMessageBox::Yes | QMessageBox::No,QMessageBox::Yes);
    }
    query.finish();
}

//登录
void signin::in(){


        QString s1=line1->text(),s2=line2->text();
        if(s1==nullptr || s2==nullptr){
            return;
        }
        QSqlQuery query(user_db);
        qDebug()<<"登录账号 = "<<s1<<"  登录密码 = "<<s2;
        query.exec(QString("select* from user where zhanghao = '%1' and mima = '%2'").arg(line1->text()).arg(line2->text()));
        if(query.next() == false){
            return;
        }
        query.finish();


}


