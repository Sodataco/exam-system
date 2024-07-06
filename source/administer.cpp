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


//未使用
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



//一个测试函数
bool Administer::derive_data_to_sql(QSqlDatabase& db){
    QSqlQuery query(db);
    QString s1="111";
    QString s2="111";
    QString s4="111";
    qDebug()<<"111";
    query.exec(QString("insert into user(zhanghao,mima) values('%1','%2')").arg(s1).arg(s2));
    query.exec(QString("insert into user(zhanghao,mima) values('%1','%2')").arg("11").arg("11"));
    qDebug()<<"111";
    qDebug()<<"插入完成";
    query.finish();
    return true;
}




void Administer::readAndStoreExcelData(const QString &filePath, QSqlDatabase &db) {
    // 打开Excel应用程序
    QAxObject excel("Excel.Application");
    excel.setProperty("Visible", false);

    qDebug() << "Error calling Open: ";

    // 打开工作簿
    QAxObject *workbooks = excel.querySubObject("Workbooks");
    QAxObject *workbook = workbooks->querySubObject("Open(const QString&)", filePath);



    // 获取工作表
    QAxObject *sheets = workbook->querySubObject("Sheets");
    QAxObject *sheet = sheets->querySubObject("Item(int)", 1);



    // 获取单列数据的行数
    QAxObject *usedRange = sheet->querySubObject("UsedRange");
    QAxObject *rows = usedRange->querySubObject("Rows");
    int rowCount = rows->property("Count").toInt();




    QSqlQuery query(db);

    // 读取单列数据并存入数据库
    for (int row = 1; row <= rowCount; ++row) {
        QAxObject *cell = sheet->querySubObject("Cells(int,int)", row, 1); // 从第一列读取数据
        QVariant cellValue = cell->dynamicCall("Value()");
        QString username = cellValue.toString();
        QString password = "12345"; // 统一设置密码为 "12345"

        // 插入数据到数据库
        query.exec(QString("insert into user(zhanghao,mima) values('%1','%2')").arg(username).arg(password));
        if (!query.exec()) {
            qDebug() << "Error inserting into database:" << query.lastError().text();
        }

        delete cell;
    }

    // 关闭Excel和数据库连接
    workbook->dynamicCall("Close()");
    excel.dynamicCall("Quit()");
    delete workbook;
    delete workbooks;

}


