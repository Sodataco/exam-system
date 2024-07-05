/********************************************************************************
** Form generated from reading UI file 'teacherwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERWINDOW_H
#define UI_TEACHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *teacherwindow)
    {
        if (teacherwindow->objectName().isEmpty())
            teacherwindow->setObjectName("teacherwindow");
        teacherwindow->resize(605, 482);
        label = new QLabel(teacherwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 291, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(teacherwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 100, 111, 111));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(teacherwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(180, 100, 111, 111));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(teacherwindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 260, 111, 111));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(teacherwindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(180, 260, 111, 111));
        pushButton_4->setFont(font);

        retranslateUi(teacherwindow);

        QMetaObject::connectSlotsByName(teacherwindow);
    } // setupUi

    void retranslateUi(QWidget *teacherwindow)
    {
        teacherwindow->setWindowTitle(QCoreApplication::translate("teacherwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("teacherwindow", "\345\234\250\347\272\277\350\200\203\350\257\225\345\271\263\345\217\260\357\274\210\346\225\231\345\270\210\347\253\257\357\274\211", nullptr));
        pushButton->setText(QCoreApplication::translate("teacherwindow", "\351\242\230\345\272\223", nullptr));
        pushButton_2->setText(QCoreApplication::translate("teacherwindow", "\347\273\204\345\215\267", nullptr));
        pushButton_3->setText(QCoreApplication::translate("teacherwindow", "\346\211\271\346\224\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("teacherwindow", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherwindow: public Ui_teacherwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERWINDOW_H
