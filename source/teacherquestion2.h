#ifndef TEACHERQUESTION2_H
#define TEACHERQUESTION2_H

#include <QWidget>

namespace Ui {
class teacherquestion2;
}

class teacherquestion2 : public QWidget
{
    Q_OBJECT

public:
    explicit teacherquestion2(QWidget *parent = 0);
    ~teacherquestion2();

private:
    Ui::teacherquestion2 *ui;
};

#endif // TEACHERQUESTION2_H
