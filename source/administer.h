#ifndef ADMINISTER_H
#define ADMINISTER_H

#include <QWidget>

#include <QPainter>
#include <QAction>
#include <QApplication>
#include <QComboBox>
#include <QCheckBox>
#include <QDebug>
#include <QFont>
#include <QFile>
#include <QFileInfo>
#include <QIcon>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QMouseEvent>
#include <QMenu>
#include <QMovie>
#include <QPushButton>
#include <QPoint>
#include <QScreen>
#include <QSystemTrayIcon>
#include <QToolButton>
#include <synchapi.h>
#include <QTime>

#include <QFile>
#include <QFileDialog>

#include <QAxObject> // 用于操作Excel的头文件
#include <user.h>

//数据库
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
namespace Ui {
class Administer;
}

class Administer : public QWidget
{
    Q_OBJECT

public:

    void paintEvent(QPaintEvent*);
    QPainter *p;
    QImage im;



   void openSql(QSqlDatabase& db,const QString connectionName,const QString SQLName);
   bool derive_data_to_sql(QSqlDatabase& db);
   void readAndStoreExcelData(const QString &filePath, QSqlDatabase &db);
   int getRecordCount(const QString &tableName, QSqlDatabase &db);


    explicit Administer(QWidget *parent = nullptr);
    ~Administer();

private slots:
    void receivelogin();



    void on_importExcel_clicked();

private:
    Ui::Administer *ui;
};

#endif // ADMINISTER_H
