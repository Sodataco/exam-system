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
    void showstu();
    void showexam();


private slots:
    void receivelogin();
    void receiveReturn();

    void on_Return_clicked();

    void on_exam_clicked();


private:
    Ui::studentpreexam *ui;
};

#endif // STUDENTPREEXAM_H
