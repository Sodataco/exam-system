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
    ui->EditClass->setPlaceholderText("密码");


    ui->find->setIcon(QIcon(":/image/find.png"));

    //connect(ui->finishimport,&QPushButton::clicked,this,&Administer::on_finishimport_clicked);

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






//一个测试函数
void Administer::paintEvent(QPaintEvent *){
    p=new QPainter;
    p->begin(this);
    p->setPen(QPen(Qt::black,3,Qt::SolidLine));//设置画笔形式
    p->setBrush(QBrush(Qt::white,Qt::SolidPattern));//设置画刷形式
    p->drawLine(220,0,220,450);

    p->end();
}


//自动导入一个账号
bool Administer::derive_data_to_sql(QSqlDatabase& db){
    QSqlQuery query(db);
   QString s1="A121";


   // query.exec(QString("insert into user(zhanghao,mima) values('%1','%2')").arg(s1).arg(s2));

    query.exec(QString("select* from user where zhanghao = '%1'").arg(s1));
    if(query.next() == false){
        QString s1="A121";
        QString s2="233";
        QString s3="无名";
        query.exec(QString("insert into user(zhanghao,mima,name) values('%1','%2','%3')").arg(s1).arg(s2).arg(s3));
        s1="S121";
        query.exec(QString("insert into user(zhanghao,mima,name) values('%1','%2','%3')").arg(s1).arg(s2).arg(s3));
        s1="T121";
        query.exec(QString("insert into user(zhanghao,mima,name) values('%1','%2','%3')").arg(s1).arg(s2).arg(s3));
        qDebug()<<"插入完成Administer";
        return true;
    }

    return false;
}



int Administer::getRecordCount(const QString &tableName, QSqlDatabase &db) {
    QSqlQuery query(db);
    QString sqlQuery = QString("SELECT COUNT(*) FROM %1;").arg(tableName);

    if (query.exec(sqlQuery)) {
        if (query.next()) {
            return query.value(0).toInt();
        }
        else {
            qDebug() << "No records found in table" << tableName;
            return 0; // 返回记录数为 0
        }
    }
    else {
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



void Administer::on_resetPassword_clicked()
{
    QString student=ui->search2->toPlainText();

    student='S'+student;
    // 创建SQL查询对象
    QSqlQuery query(user_db);

    query.exec(QString("update user set mima = '%1' where zhanghao = '%2'").arg("12345").arg(student));

    query.finish();
    ui->search2->clear();

}



//Excel导入
void Administer::readAndStoreExcelData(const QString &filePath, QSqlDatabase &db) {
#ifdef _WIN32
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
        QString username, user_id, class_num;

        QAxObject *cell1 = sheet->querySubObject("Cells(int,int)", row, 1); // 第一列
        QVariant cellValue1 = cell1->dynamicCall("Value()");
        username = cellValue1.toString();

        QAxObject *cell2 = sheet->querySubObject("Cells(int,int)", row, 2); // 第二列
        QVariant cellValue2 = cell2->dynamicCall("Value()");
        user_id = cellValue2.toString();

        QAxObject *cell3 = sheet->querySubObject("Cells(int,int)", row, 3); // 第三列
        QVariant cellValue3 = cell3->dynamicCall("Value()");
        class_num = cellValue3.toString();

        QString password = "12345"; // 统一设置密码为 "12345"

        query.exec(QString("select* from user where zhanghao = '%1'").arg(user_id));
        if(query.next() == false){
            query.exec(QString("insert into user(zhanghao,mima,name) values('%1','%2','%3')").arg(user_id).arg(password).arg(username));
            //待修改，一个学生，不同班级
            query.exec(QString("insert into class(class_id,user_id) values('%1','%2')").arg(class_num).arg(user_id));

            //qDebug()<<"插入完成Administer";
        }

    }



    // 关闭Excel
    workbook->dynamicCall("Close()");
    excel.dynamicCall("Quit()");
    delete workbook;
    delete workbooks;

#else
    // 使用 QtXlsx 库读取 Excel 文件
    QXlsx::Document xlsx(filePath);
    QXlsx::CellRange range = xlsx.dimension();
    int rowCount = range.rowCount();
    QSqlQuery query(db);

    for (int row = 1; row <= rowCount; ++row) {
        QString username = xlsx.read(row, 1).toString();
        QString user_id = xlsx.read(row, 2).toString();
        QString class_num = xlsx.read(row, 3).toString();
        QString password = "12345";

        query.exec(QString("select * from user where zhanghao = '%1'").arg(user_id));
        if (!query.next()) {
            query.exec(QString("insert into user(zhanghao,mima,name) values('%1','%2','%3')")
                           .arg(user_id).arg(password).arg(username));
            query.exec(QString("insert into class(class_id,user_id) values('%1','%2')")
                           .arg(class_num).arg(user_id));
        }
    }
#endif
}





void Administer::on_importExcel_clicked()
{
    //实现获取文件路径的功能
    QString filePath = QFileDialog::getOpenFileName(nullptr, "选择文件", QDir::homePath(), "Excel 文件 (*.xlsx *.xls)");

    if(!filePath.isEmpty()){
        this->readAndStoreExcelData(filePath,user_db);

        QMessageBox::about(this, "棒", "Successfully import Excel.");
    }
    else{
        QMessageBox::critical(this, "Damn", "Failed to import Excel.");
    }

}




void Administer::on_finishimport_clicked()
{
    QSqlQuery query(user_db);
    QString s1=ui->EditName->text();
    QString s2=ui->EditAccount->text();
    QString s3=ui->EditPassword->text();
    QString s4=ui->EditClass->toPlainText();

    qDebug()<<"插入完成2333";

    query.exec(QString("select* from user where zhanghao = '%1'").arg(s2));
    if(query.next() == false){
        query.exec(QString("insert into user(zhanghao,mima) values('%1','%2')").arg(s2).arg(s3));

        qDebug()<<"插入完成2333";
        query.finish();
        QMessageBox::about(this, "棒", "Successfully import account.");
        ui->EditName->clear();
        ui->EditAccount->clear();
        ui->EditPassword->clear();
        return ;
    }
    qDebug()<<"插入失败2333";
    query.finish();
    QMessageBox::about(this, "棒", "not Successfully import account.");
}

