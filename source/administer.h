#ifndef ADMINISTER_H
#define ADMINISTER_H

#include <QWidget>

namespace Ui {
class Administer;
}

class Administer : public QWidget
{
    Q_OBJECT

public:
    explicit Administer(QWidget *parent = nullptr);
    ~Administer();

private slots:
    void receivelogin();


private:
    Ui::Administer *ui;
};

#endif // ADMINISTER_H
