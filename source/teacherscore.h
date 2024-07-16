#ifndef TEACHERSCORE_H
#define TEACHERSCORE_H

#include <QWidget>
#include <QProcess>
#include <QDebug>

namespace Ui {
class teacherscore;
}

class teacherscore : public QWidget
{
    Q_OBJECT

public:
    explicit teacherscore(QWidget *parent = 0);
    ~teacherscore();

private:
    Ui::teacherscore *ui;
};

#endif // TEACHERSCORE_H
