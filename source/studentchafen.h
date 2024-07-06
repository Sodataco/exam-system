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

private:
    Ui::studentchafen *ui;
};

#endif // STUDENTCHAFEN_H
