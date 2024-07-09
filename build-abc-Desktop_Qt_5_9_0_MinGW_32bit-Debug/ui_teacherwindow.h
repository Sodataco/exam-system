/********************************************************************************
** Form generated from reading UI file 'teacherwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERWINDOW_H
#define UI_TEACHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherwindow
{
public:
    QLabel *label;
    QPushButton *createquestion;
    QPushButton *pushButton_2;
    QPushButton *judge;
    QPushButton *pushButton_4;
    QPushButton *Return;

    void setupUi(QWidget *teacherwindow)
    {
        if (teacherwindow->objectName().isEmpty())
            teacherwindow->setObjectName(QStringLiteral("teacherwindow"));
        teacherwindow->resize(605, 482);
        label = new QLabel(teacherwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 291, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        createquestion = new QPushButton(teacherwindow);
        createquestion->setObjectName(QStringLiteral("createquestion"));
        createquestion->setGeometry(QRect(30, 100, 111, 111));
        createquestion->setFont(font);
        pushButton_2 = new QPushButton(teacherwindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 100, 111, 111));
        pushButton_2->setFont(font);
        judge = new QPushButton(teacherwindow);
        judge->setObjectName(QStringLiteral("judge"));
        judge->setGeometry(QRect(30, 260, 111, 111));
        judge->setFont(font);
        pushButton_4 = new QPushButton(teacherwindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 260, 111, 111));
        pushButton_4->setFont(font);
        Return = new QPushButton(teacherwindow);
        Return->setObjectName(QStringLiteral("Return"));
        Return->setGeometry(QRect(450, 390, 80, 31));
        QFont font1;
        font1.setPointSize(12);
        Return->setFont(font1);

        retranslateUi(teacherwindow);

        QMetaObject::connectSlotsByName(teacherwindow);
    } // setupUi

    void retranslateUi(QWidget *teacherwindow)
    {
        teacherwindow->setWindowTitle(QApplication::translate("teacherwindow", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("teacherwindow", "\345\234\250\347\272\277\350\200\203\350\257\225\345\271\263\345\217\260\357\274\210\346\225\231\345\270\210\347\253\257\357\274\211", Q_NULLPTR));
        createquestion->setText(QApplication::translate("teacherwindow", "\351\242\230\345\272\223", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("teacherwindow", "\347\273\204\345\215\267", Q_NULLPTR));
        judge->setText(QApplication::translate("teacherwindow", "\346\211\271\346\224\271", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("teacherwindow", "\346\210\220\347\273\251\347\256\241\347\220\206", Q_NULLPTR));
        Return->setText(QApplication::translate("teacherwindow", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teacherwindow: public Ui_teacherwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERWINDOW_H
