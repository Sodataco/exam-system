#ifndef TEACHERQUESTION_H
#define TEACHERQUESTION_H

#ifdef _WIN32
#include <QAxObject>
#else
#include <QtXlsx>
#endif
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QStringList>
#include <QFile>
#include <QFileDialog>

#include <QWidget>
#include "user.h"

namespace Ui {
class teacherquestion;
}

class teacherquestion : public QWidget
{
    Q_OBJECT

public:
    void importChoiceQuestions(const QString &filePath, QSqlDatabase &db);
    void importFillBlankQuestions(const QString &filePath, QSqlDatabase &db);
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

    void on_importSelectquestion_2_clicked();

    void on_importBlankquestion_2_clicked();

    void on_importAnswerquestion_2_clicked();

private:
    Ui::teacherquestion *ui;
};

#endif // TEACHERQUESTION_H
