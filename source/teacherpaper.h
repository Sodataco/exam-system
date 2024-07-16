#ifndef TEACHERPAPER_H
#define TEACHERPAPER_H

#include <QWidget>

namespace Ui {
class teacherpaper;
}

class teacherpaper : public QWidget
{
    Q_OBJECT

public:
    explicit teacherpaper(QWidget *parent = 0);
    ~teacherpaper();

private:
    Ui::teacherpaper *ui;
};

#endif // TEACHERPAPER_H
