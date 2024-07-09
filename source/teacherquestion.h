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

signals:
    void showteacher();

private slots:
    void receivelogin();

    void on_questionSelect_clicked();

    void on_questionBlank_clicked();

    void on_questionAnswer_clicked();

    void on_Return_clicked();

    void on_importSelectquestion_clicked();

    void on_importBlankquestion_clicked();

    void on_importAnswerquestion_clicked();

private:
    Ui::teacherquestion *ui;
};

#endif // TEACHERQUESTION_H
