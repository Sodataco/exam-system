#ifndef USER_DB_H
#define USER_DB_H


#include <QWidget>
#include <QMessageBox>
//#include <synchapi.h>   //延时
#include <QList>
#include <QMenu>
#include <QFile>
//standard view/model
#include <QTableView>
#include <QStandardItemModel>
#include <QHeaderView>

//数据库
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>



class user_db
{
public:
    user_db();

    //数据库
    void createSQL(QSqlDatabase& db,const QString& connectionName,const QString& SQLName);  //创建数据库并打开
    virtual int SQLCount()=0;
    virtual void derive_SQL_to_model(const QString& studentID)=0;    //导入数据库数据到model
    virtual void derive_model_to_SQL(const QString& studentID)=0; //导入model数据到数据库

};

#endif // USER_DB_H
