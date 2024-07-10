#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include<studentwindow.h>
#include<teacherwindow.h>
#include<administer.h>

#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QMessageBox>
#include <QKeyEvent>




static bool openstudent=0;
static bool openteacher=0;
static bool openadminister=0;
static bool eye=0;


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void keyPressEvent(QKeyEvent *event);
    //void paintEvent(QPaintEvent*);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //信号
signals:
    void showstu();
    void showteacher();
    void showadminister();
    void showeye(bool checkde);


//槽函数
private slots:
    void receiveloginagain();

    void on_loginButton_clicked();

    void on_student_clicked();

    void on_teacher_clicked();

    void on_Administrators_clicked();

    void on_eye_clicked();

    void changeeye(bool checked);

    void on_commandLinkButton_clicked();

    void on_zuixiaohua_clicked();

    void on_tuichu_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
