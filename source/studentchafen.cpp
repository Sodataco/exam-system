#include "studentchafen.h"
#include "ui_studentchafen.h"

studentchafen::studentchafen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentchafen)
{
    ui->setupUi(this);
}

studentchafen::~studentchafen()
{
    delete ui;
}
