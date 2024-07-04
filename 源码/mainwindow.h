#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include<studentwindow.h>
#include<teacherwindow.h>


static bool openstudent=0;
static bool openteacher=0;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

//登录页面
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void showstu();
    void showteacher();

private slots:
    void receiveloginagain();

    void on_loginButton_clicked();

    void on_student_clicked();

    void on_teacher_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
