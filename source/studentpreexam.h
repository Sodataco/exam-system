#ifndef STUDENTPREEXAM_H
#define STUDENTPREEXAM_H

#include <QWidget>
#include <QListWidget>
#include "user.h"
#include "studentexam.h"

namespace Ui {
class studentpreexam;
}

class studentpreexam : public QWidget
{
    Q_OBJECT

public:


    explicit studentpreexam(QWidget *parent = nullptr);
    ~studentpreexam();


signals:
    void showstu();
    void showexam();


private slots:
    void receivelogin();
    void receiveReturn();

    void on_Return_clicked();

    void on_refresh_clicked();

    void on_examList_itemClicked(QListWidgetItem *item);

private:
    Ui::studentpreexam *ui;
};

#endif // STUDENTPREEXAM_H
