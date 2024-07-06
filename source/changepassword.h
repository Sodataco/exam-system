#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class changePassword;
}

class changePassword : public QWidget
{
    Q_OBJECT

public:
    explicit changePassword(QWidget *parent = nullptr);
    ~changePassword();


signals:
    void showstu();

private slots:
    void receivelogin();

    void on_Return_clicked();

private:
    Ui::changePassword *ui;
};

#endif // CHANGEPASSWORD_H
