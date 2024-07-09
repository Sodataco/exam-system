#ifndef COMBINEPAPER_H
#define COMBINEPAPER_H

#include <QWidget>

namespace Ui {
class combinePaper;
}

class combinePaper : public QWidget
{
    Q_OBJECT

public:
    explicit combinePaper(QWidget *parent = nullptr);
    ~combinePaper();

private slots:
    void receivelogin();


private:
    Ui::combinePaper *ui;
};

#endif // COMBINEPAPER_H
