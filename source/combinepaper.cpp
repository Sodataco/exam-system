#include "combinepaper.h"
#include "ui_combinepaper.h"

combinePaper::combinePaper(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::combinePaper)
{
    ui->setupUi(this);
}

combinePaper::~combinePaper()
{
    delete ui;
}


void combinePaper::receivelogin(){
    this->show();
}
