#ifndef STUDENTEXAM_H
#define STUDENTEXAM_H

#include <QWidget>
#include <QMainWindow>
#include <QRadioButton>
#include <QCommandLinkButton>

namespace Ui {
class studentexam;
}

class studentexam : public QWidget
{
    Q_OBJECT

public:
    explicit studentexam(QWidget *parent = nullptr);
    ~studentexam();

signals:
    showpreexam();
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
};

#endif // STUDENTEXAM_H
