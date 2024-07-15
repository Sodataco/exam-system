#ifndef STUDENTCHAFEN_H
#define STUDENTCHAFEN_H

#include <QWidget>
#include <QListWidgetItem>
#include"user.h"

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

    void on_examList_itemClicked(QListWidgetItem *item);

private:
    Ui::studentchafen *ui;
};

#endif // STUDENTCHAFEN_H
