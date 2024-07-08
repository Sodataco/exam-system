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
signals:
    void showcreatequestion();
    void showmain();

private slots:
    void receivelogin();

    void on_createquestion_clicked();

    void on_Return_clicked();

    void on_judge_clicked();

private:
    Ui::teacherwindow *ui;
};

#endif // TEACHERWINDOW_H
