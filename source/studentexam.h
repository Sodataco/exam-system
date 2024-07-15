#ifndef STUDENTEXAM_H
#define STUDENTEXAM_H

#include <QWidget>
#include <QMainWindow>
#include <QRadioButton>
#include <QCommandLinkButton>

#include "user.h"

namespace Ui {
class studentexam;
}

class studentexam : public QWidget
{
    Q_OBJECT


public:

    void displayQuestions(const int paperid,QSqlDatabase &db);
    int getquestiontype(const int paperid,QSqlDatabase &db);
    int getquestionid(const int paperid,QSqlDatabase &db);

    QString question_text[10001];
    int question_type[10001];
    QString optionA[10001];
    QString optionB[10001];
    QString optionC[10001];
    QString optionD[10001];
    QString question_answer[10001];



public:
    explicit studentexam(QWidget *parent = nullptr);
    ~studentexam();

signals:

    void showpreexam();

private slots:
    void onOptionClicked();
    void onRadioButtonClicked();
    void onPreviousClicked();
    void onNextClicked();
    void onExitClicked();
    void updateProgressBar();

    void receivelogin();


private:
    Ui::studentexam *ui;
    int currentQuestion;  // Declare currentQuestion as a member variable
    int totalQuestions;
    QList<bool> questionCompleted;
    QList<QRadioButton *> radioButtons;  // 存储所有单选按钮的列表
};

#endif // STUDENTEXAM_H
