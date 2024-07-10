#ifndef STUDENTCHAFEN_H
#define STUDENTCHAFEN_H

#include <QWidget>

namespace Ui {
class studentchafen;
}

class studentchafen : public QWidget
{
    Q_OBJECT

public:
    explicit studentchafen(QWidget *parent = 0);
    ~studentchafen();

signals:
    void showstudent();

private slots:
    void receivelogin();

    void on_Return_clicked();

    void on_refresh_clicked();

private:
    Ui::studentchafen *ui;
};

#endif // STUDENTCHAFEN_H
