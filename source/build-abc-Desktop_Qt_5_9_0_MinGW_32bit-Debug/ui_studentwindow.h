/********************************************************************************
** Form generated from reading UI file 'studentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTWINDOW_H
#define UI_STUDENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QPushButton *changePassword;

    void setupUi(QWidget *studentwindow)
    {
        if (studentwindow->objectName().isEmpty())
            studentwindow->setObjectName(QStringLiteral("studentwindow"));
        studentwindow->resize(712, 526);
        loginagain = new QPushButton(studentwindow);
        loginagain->setObjectName(QStringLiteral("loginagain"));
        loginagain->setGeometry(QRect(630, 490, 81, 31));
        QFont font;
        font.setPointSize(12);
        loginagain->setFont(font);
        label = new QLabel(studentwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 281, 71));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        examBtn = new QPushButton(studentwindow);
        examBtn->setObjectName(QStringLiteral("examBtn"));
        examBtn->setGeometry(QRect(60, 110, 151, 141));
        QFont font2;
        font2.setPointSize(26);
        examBtn->setFont(font2);
        findBtn = new QPushButton(studentwindow);
        findBtn->setObjectName(QStringLiteral("findBtn"));
        findBtn->setGeometry(QRect(60, 280, 151, 141));
        findBtn->setFont(font2);
        changePassword = new QPushButton(studentwindow);
        changePassword->setObjectName(QStringLiteral("changePassword"));
        changePassword->setGeometry(QRect(520, 490, 91, 31));
        changePassword->setFont(font);

        retranslateUi(studentwindow);

        QMetaObject::connectSlotsByName(studentwindow);
    } // setupUi

    void retranslateUi(QWidget *studentwindow)
    {
        studentwindow->setWindowTitle(QApplication::translate("studentwindow", "Form", Q_NULLPTR));
        loginagain->setText(QApplication::translate("studentwindow", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("studentwindow", "\345\234\250\347\272\277\350\200\203\350\257\225\347\263\273\347\273\237(\345\255\246\347\224\237\347\253\257\357\274\211", Q_NULLPTR));
        examBtn->setText(QApplication::translate("studentwindow", "\350\200\203\350\257\225", Q_NULLPTR));
        findBtn->setText(QApplication::translate("studentwindow", "\346\237\245\345\210\206", Q_NULLPTR));
        changePassword->setText(QApplication::translate("studentwindow", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studentwindow: public Ui_studentwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWINDOW_H
