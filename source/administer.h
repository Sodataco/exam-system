#ifndef ADMINISTER_H
#define ADMINISTER_H

#include <QWidget>

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

   void openSql(QSqlDatabase& db,const QString connectionName,const QString SQLName);

    explicit Administer(QWidget *parent = nullptr);
    ~Administer();

private slots:
    void receivelogin();


private:
    Ui::Administer *ui;
};

#endif // ADMINISTER_H
