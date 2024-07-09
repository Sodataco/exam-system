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
#include <QTime>

#include <QFile>
#include <QFileDialog>
#include <QAxObject>

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

signals:
    void showmain();

private slots:
    void receivelogin();



    void on_importExcel_clicked();

    void on_importAccount_clicked();

    void on_changegrade_clicked();

    void on_manage_clicked();

    void on_Return_clicked();

    void on_resetPassword_clicked();

    void on_finishimport_clicked();

private:
    Ui::Administer *ui;
};

#endif // ADMINISTER_H
