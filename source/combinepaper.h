#ifndef COMBINEPAPER_H
#define COMBINEPAPER_H

#include <QWidget>
#include <QMessageBox>
#include <QTime>
#include <QDateTime>
#include <QListWidget>
#include <QListWidgetItem>
#include <QVBoxLayout>
#include <QVector>

#include "user.h"

namespace Ui {
class combinePaper;
}

class combinePaper : public QWidget
{
    Q_OBJECT

public:
    int question_type();


    void getclass(int num,const int &paper_id);

    void readandDerivequestion(const QString &user_id,const int &paper_id);
    void insertPaperToDatabase(int class_num,const QString &paperName, QSqlDatabase &db);
    int getNextPaperId(QSqlDatabase &db);
    void clean_is_use(const int &paper_id);

    bool changePw(const QString &questiontext,QSqlDatabase &db);

    explicit combinePaper(QWidget *parent = nullptr);

    ~combinePaper();


signals:
    void showteacher();

private slots:
    void receivelogin();


    void on_finish_clicked();

    void on_Return_clicked();

    void on_Refresh_clicked();


private:

    QVector<QCheckBox*> checkBoxes;

    Ui::combinePaper *ui;
};

#endif // COMBINEPAPER_H
