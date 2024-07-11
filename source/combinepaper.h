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
    bool isUse(const QString &username, const QString &Password,QSqlDatabase &db);

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
