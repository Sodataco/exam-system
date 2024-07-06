#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QWidget>

namespace Ui {
class changePassword;
}

class changePassword : public QWidget
{
    Q_OBJECT

public:
    explicit changePassword(QWidget *parent = nullptr);
    ~changePassword();

private:
    Ui::changePassword *ui;
};

#endif // CHANGEPASSWORD_H
