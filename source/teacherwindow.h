#ifndef TEACHERWINDOW_H
#define TEACHERWINDOW_H

#include <QWidget>
#include"paper.h"

namespace Ui {
class teacherwindow;
}

class teacherwindow : public QWidget
{
    Q_OBJECT

public:
    explicit teacherwindow(QWidget *parent = nullptr);

    bool derive_data_to_sql(QSqlDatabase& db);




    ~teacherwindow();


private slots:
    void receivelogin();

private:
    Ui::teacherwindow *ui;
};

#endif // TEACHERWINDOW_H
