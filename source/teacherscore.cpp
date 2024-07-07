#include "teacherscore.h"
#include "ui_teacherscore.h"

teacherscore::teacherscore(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teacherscore)
{
    ui->setupUi(this);
}

teacherscore::~teacherscore()
{
    delete ui;
}
