#ifndef TEACHERWINDOW_H
#define TEACHERWINDOW_H

#include <QWidget>

namespace Ui {
class teacherwindow;
}

class teacherwindow : public QWidget
{
    Q_OBJECT

public:
    explicit teacherwindow(QWidget *parent = nullptr);
    ~teacherwindow();


private slots:
    void receivelogin();

private:
    Ui::teacherwindow *ui;
};

#endif // TEACHERWINDOW_H
