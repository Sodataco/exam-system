#ifndef STUDENTPREEXAM_H
#define STUDENTPREEXAM_H

#include <QWidget>

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
    showstu();


private slots:
    void receivelogin();

    void on_Return_clicked();

private:
    Ui::studentpreexam *ui;
};

#endif // STUDENTPREEXAM_H
