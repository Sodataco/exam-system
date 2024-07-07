#include "teacherquestion2.h"
#include "ui_teacherquestion2.h"

teacherquestion2::teacherquestion2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teacherquestion2)
{
    ui->setupUi(this);
}

teacherquestion2::~teacherquestion2()
{
    delete ui;
}
