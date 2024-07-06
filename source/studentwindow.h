#ifndef STUDENTWINDOW_H
#define STUDENTWINDOW_H

#include <QWidget>
#include <QPainter>
#include <QFont>

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


private slots:
    void receivelogin();
    void receiveReturn();

    void on_loginagain_clicked();

    void on_findBtn_clicked();

    void on_changePassword_clicked();

private:
    Ui::studentwindow *ui;
};

#endif // STUDENTWINDOW_H
