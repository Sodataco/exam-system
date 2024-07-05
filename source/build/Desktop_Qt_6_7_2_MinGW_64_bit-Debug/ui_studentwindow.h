/********************************************************************************
** Form generated from reading UI file 'studentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTWINDOW_H
#define UI_STUDENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentwindow
{
public:
    QPushButton *loginagain;
    QLabel *label;
    QPushButton *examBtn;
    QPushButton *findBtn;

    void setupUi(QWidget *studentwindow)
    {
        if (studentwindow->objectName().isEmpty())
            studentwindow->setObjectName("studentwindow");
        studentwindow->resize(712, 526);
        loginagain = new QPushButton(studentwindow);
        loginagain->setObjectName("loginagain");
        loginagain->setGeometry(QRect(630, 490, 81, 31));
        QFont font;
        font.setPointSize(12);
        loginagain->setFont(font);
        label = new QLabel(studentwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 281, 71));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        examBtn = new QPushButton(studentwindow);
        examBtn->setObjectName("examBtn");
        examBtn->setGeometry(QRect(60, 110, 151, 141));
        QFont font2;
        font2.setPointSize(26);
        examBtn->setFont(font2);
        findBtn = new QPushButton(studentwindow);
        findBtn->setObjectName("findBtn");
        findBtn->setGeometry(QRect(60, 280, 151, 141));
        findBtn->setFont(font2);

        retranslateUi(studentwindow);

        QMetaObject::connectSlotsByName(studentwindow);
    } // setupUi

    void retranslateUi(QWidget *studentwindow)
    {
        studentwindow->setWindowTitle(QCoreApplication::translate("studentwindow", "Form", nullptr));
        loginagain->setText(QCoreApplication::translate("studentwindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("studentwindow", "\345\234\250\347\272\277\350\200\203\350\257\225\347\263\273\347\273\237(\345\255\246\347\224\237\347\253\257\357\274\211", nullptr));
        examBtn->setText(QCoreApplication::translate("studentwindow", "\350\200\203\350\257\225", nullptr));
        findBtn->setText(QCoreApplication::translate("studentwindow", "\346\237\245\345\210\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentwindow: public Ui_studentwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWINDOW_H
