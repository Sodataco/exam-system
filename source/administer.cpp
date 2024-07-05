#include "administer.h"
#include "ui_administer.h"

Administer::Administer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Administer)
{
    ui->setupUi(this);
}

Administer::~Administer()
{
    delete ui;
}

void Administer::receivelogin(){
    this->show();
}

void Administer::openSql(QSqlDatabase& db,const QString connectionName,const QString SQLName)
{
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE",connectionName);
    db.setDatabaseName(SQLName+".db");
    if(db.open()){
        qDebug()<<SQLName+"_db数据库已打开";
    }else{
        QMessageBox::information(this,"警告",db.lastError().text(),QMessageBox::Yes | QMessageBox::No,QMessageBox::Yes);
        return;
    }
}

bool Administer::derive_data_to_sql(QSqlDatabase& db){
    QSqlQuery query(db);
    QString s1="111";
    QString s2="111";
    QString s4="111";
    qDebug()<<"111";
    query.exec(QString("insert into user(zhanghao,mima,phone) values('%1','%2','%3')").arg(s1).arg(s2).arg(s4));
    query.exec(QString("insert into user(zhanghao,mima,phone) values('%1','%2','%3')").arg("11").arg("11").arg("11"));
    qDebug()<<"111";
    qDebug()<<"插入完成";
    query.finish();
    return true;
}

