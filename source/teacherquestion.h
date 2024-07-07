#ifndef TEACHERQUESTION_H
#define TEACHERQUESTION_H

#include <QWidget>

namespace Ui {
class teacherquestion;
}

class teacherquestion : public QWidget
{
    Q_OBJECT

public:
    explicit teacherquestion(QWidget *parent = 0);
    ~teacherquestion();

private:
    Ui::teacherquestion *ui;
};

#endif // TEACHERQUESTION_H
