#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QWidget>
#include <QMessageBox>

//数据库
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "user.h"

namespace Ui {
class changePassword;
}

class changePassword : public QWidget
{
    Q_OBJECT

public:
    explicit changePassword(QWidget *parent = nullptr);

    bool changePw(const QString &username, const QString &newPassword,QSqlDatabase &db);
    bool ispass(const QString &username, const QString &newPassword,QSqlDatabase &db);

    ~changePassword();


signals:
    void showstu();

private slots:
    void receivelogin();

    void on_Return_clicked();

    void on_finish_clicked();

private:
    Ui::changePassword *ui;
};

#endif // CHANGEPASSWORD_H
