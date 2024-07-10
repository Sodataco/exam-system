#ifndef COMBINEPAPER_H
#define COMBINEPAPER_H

#include <QWidget>
#include <QMessageBox>
#include <QTime>
#include <QDateTime>
#include <QListWidget>
#include <QListWidgetItem>
#include <QVBoxLayout>

#include "user.h"

namespace Ui {
class combinePaper;
}

class combinePaper : public QWidget
{
    Q_OBJECT

public:
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
    Ui::combinePaper *ui;
};

#endif // COMBINEPAPER_H
