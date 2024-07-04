#include "administer.h"
#include "ui_administer.h"

Administer::Administer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Administer)
{
    ui->setupUi(this);
}

Administer::~Administer()
{
    delete ui;
}

void Administer::receivelogin(){
    this->show();
}
