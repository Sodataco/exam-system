#include "administer.h"
#include "ui_administer.h"


Administer::Administer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Administer)
{
    ui->setupUi(this);
    im.load(":/image/logo.jpg");

    ui->EditName->setPlaceholderText("姓名");
    ui->EditAccount->setPlaceholderText("学号/工号");
    ui->EditPassword->setPlaceholderText("密码");

    ui->find->setIcon(QIcon(":/image/find.png"));

    // ui->find->setStyleSheet(
    //     "QPushButton {"
    //     "    border-radius: 15px;"  // 设置圆角半径
    //     //"    background-color: white;"  // 设置背景颜色
    //     "    color: white;"  // 设置文字颜色
    //     "}"
    //     "QPushButton:hover {"
    //     "    background-color: #bbffee;"  // 悬停时的背景颜色
    //     "}"
    //     "QPushButton:pressed {"
    //     "    background-color: #00dddd;"  // 按下时的背景颜色
    //     "}"
    //     );

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
void Administer::paintEvent(QPaintEvent *){
    p=new QPainter;
    p->begin(this);
    p->setPen(QPen(Qt::black,3,Qt::SolidLine));//设置画笔形式
    p->setBrush(QBrush(Qt::white,Qt::SolidPattern));//设置画刷形式
    p->drawLine(220,0,220,450);

    p->end();
}


bool Administer::derive_data_to_sql(QSqlDatabase& db){
    QSqlQuery query(db);
    QString s1="111";
    QString s2="111";
    QString s4="111";

    query.exec(QString("insert into user(zhanghao,mima) values('%1','%2')").arg(s1).arg(s2));
    query.exec(QString("insert into user(zhanghao,mima) values('%1','%2')").arg("11").arg("11"));

    qDebug()<<"插入完成Administer";
    query.finish();
    return true;
}



<<<<<<< Updated upstream



void Administer::readAndStoreExcelData(const QString &filePath, QSqlDatabase &db) {
    /*QXlsx::Document xlsx(filePath);
    if (xlsx.workbook()->sheetCount() > 0) {
        QXlsx::Worksheet *sheet = dynamic_cast<QXlsx::Worksheet*>(xlsx.workbook()->sheet(0));
        if (!sheet) {
            qDebug() << "Failed to get the first sheet.";
            return;
=======
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
>>>>>>> Stashed changes
        }
=======
// void Administer::readAndStoreExcelData(const QString &filePath, QSqlDatabase &db) {
//     QXlsx::Document xlsx(filePath);
//     if (xlsx.workbook()->sheetCount() > 0) {
//         QXlsx::Worksheet *sheet = dynamic_cast<QXlsx::Worksheet*>(xlsx.workbook()->sheet(0));
//         if (!sheet) {
//             qDebug() << "Failed to get the first sheet.";
//             return;
//         }
>>>>>>> Stashed changes

<<<<<<< Updated upstream
//         int rowCount = sheet->dimension().rowCount();
//         QSqlQuery query(db);

//         for (int row = 1; row <= rowCount; ++row) {
//             QXlsx::Cell *cell = sheet->cellAt(row, 1);
//             if (cell) {
//                 QString username = cell->value().toString();
//                 QString password = "12345";

<<<<<<< Updated upstream
                query.exec(QString("insert into user(zhanghao,mima) values('%1','%2')").arg(username).arg(password));
                if (!query.exec()) {
                    qDebug() << "Error inserting into database:" << query.lastError().text();
                }
            }
        }
    } else {
        qDebug() << "Failed to load the Excel file.";
    }*/
=======
        delete cell;
    }

    // 关闭Excel
    workbook->dynamicCall("Close()");
    excel.dynamicCall("Quit()");
    delete workbook;
    delete workbooks;

>>>>>>> Stashed changes
}

//                 query.exec(QString("insert into user(zhanghao,mima) values('%1','%2')").arg(username).arg(password));
//                 if (!query.exec()) {
//                     qDebug() << "Error inserting into database:" << query.lastError().text();
//                 }
//             }
//         }
//     } else {
//         qDebug() << "Failed to load the Excel file.";
//     }
// }




void Administer::on_importExcel_clicked()
{
    // //实现获取文件路径的功能
    // QString filePath = QFileDialog::getOpenFileName(nullptr, "选择文件", QDir::homePath(), "Excel 文件 (*.xlsx *.xls)");

    // if(!filePath.isEmpty()){
    //     this->readAndStoreExcelData(filePath,user_db);
    // }

    // QMessageBox::about(this, "棒", "Successfully import Excel.");

}


int Administer::getRecordCount(const QString &tableName, QSqlDatabase &db) {
    QSqlQuery query(db);
    QString sqlQuery = QString("SELECT COUNT(*) FROM %1;").arg(tableName);

    if (query.exec(sqlQuery)) {
        if (query.next()) {
            return query.value(0).toInt();
        } else {
            qDebug() << "No records found in table" << tableName;
            return 0; // 返回记录数为 0
        }
    } else {
        qDebug() << "Query execution error:" << query.lastError().text();
        return -1; // 返回 -1 表示查询出错
    }
}





void Administer::on_importAccount_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Administer::on_changegrade_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Administer::on_manage_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Administer::on_Return_clicked()
{
    this->hide();
    emit showmain();
}

