#ifndef STUDENTEXAM_H
#define STUDENTEXAM_H

#include <QWidget>

namespace Ui {
class studentexam;
}

class studentexam : public QWidget
{
    Q_OBJECT

public:
    explicit studentexam(QWidget *parent = 0);
    ~studentexam();

private:
    Ui::studentexam *ui;
};

#endif // STUDENTEXAM_H
