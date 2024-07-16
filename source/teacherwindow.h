#ifndef TEACHERWINDOW_H
#define TEACHERWINDOW_H

#include <QWidget>

#include"user.h"


namespace Ui {
class teacherwindow;
}

class teacherwindow : public QWidget
{
    Q_OBJECT

public:
    explicit teacherwindow(QWidget *parent = nullptr);



    bool derive_data_to_sql(QSqlDatabase& db);
    QString getPaperName(int paperId,QSqlDatabase& db);





    ~teacherwindow();

signals:
    void showcreatequestion();
    void showmain();
    void showjudge();
    void showpaper();


    void showmanage();

private slots:
    void receivelogin();

    void on_createquestion_clicked();

    void on_judge_clicked();

    void on_Return1_clicked();


    void on_paper_clicked();

    void on_manage_clicked();


private:
    Ui::teacherwindow *ui;
};

#endif // TEACHERWINDOW_H
