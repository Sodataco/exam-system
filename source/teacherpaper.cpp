#include "teacherpaper.h"
#include "ui_teacherpaper.h"

teacherpaper::teacherpaper(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teacherpaper)
{
    ui->setupUi(this);
}

teacherpaper::~teacherpaper()
{
    delete ui;
}
