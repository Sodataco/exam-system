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
