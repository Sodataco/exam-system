#ifndef STUDENTWINDOW_H
#define STUDENTWINDOW_H

#include <QWidget>
#include <QPainter>
#include <QFont>
#include <QDate>
#include "user.h"


namespace Ui {
class studentwindow;
}

class studentwindow : public QWidget
{
    Q_OBJECT

public:
    void paintEvent(QPaintEvent*);
    QPainter *paint;
    explicit studentwindow(QWidget *parent = nullptr);
    QString getUsername(const  QString &username);
    ~studentwindow();

signals:
    void showmain();
    void showscore();
    void showchangePassword();

    void showeaxm();


private slots:
    void receivelogin();
    void receiveReturn();

    void on_loginagain_clicked();

    void on_findBtn_clicked();

    void on_changePassword_clicked();

    void on_examBtn_clicked();

private:
    Ui::studentwindow *ui;
};

#endif // STUDENTWINDOW_H
