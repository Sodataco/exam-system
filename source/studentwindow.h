#ifndef STUDENTWINDOW_H
#define STUDENTWINDOW_H

#include <QWidget>
#include <QPainter>
#include <QFont>
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
    QString getUsername( QString username);


private:
    Ui::studentwindow *ui;
};

#endif // STUDENTWINDOW_H
