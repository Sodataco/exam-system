#ifndef TEACHERSCORE_H
#define TEACHERSCORE_H

#include <QWidget>
#include <QListWidgetItem>
#include <QRadioButton>
#include"studentexam.h"
#include"user.h"

namespace Ui {
class teacherscore;
}

class teacherscore : public QWidget
{
    Q_OBJECT

public:

    void displayQuestions(const int paperid,QSqlDatabase &db);

    int paperId;
    QString question_text[101];
    int question_type[101];
    QString optionA[101];
    QString optionB[101];
    QString optionC[101];
    QString optionD[101];
    QString question_answer[101];
    QString correct_answer[1001];
    QString scores[10001];
    explicit teacherscore(QWidget *parent = 0);
    ~teacherscore();


signals:
    showteacher();

private slots:
    void receivelogin();

    void onRadioButtonClicked();

    void on_paperlist_itemClicked(QListWidgetItem *item);

    void on_returnaAndSave_clicked();

private:
    Ui::teacherscore *ui;

    int currentQuestion;  // Declare currentQuestion as a member variable
    int totalQuestions;
    QList<bool> questionCompleted;
    QList<QRadioButton *> radioButtons;  // 存储所有单选按钮的列表


};

#endif // TEACHERSCORE_H
