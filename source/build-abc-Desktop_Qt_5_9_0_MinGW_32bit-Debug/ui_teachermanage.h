/********************************************************************************
** Form generated from reading UI file 'teachermanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERMANAGE_H
#define UI_TEACHERMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teachermanage
{
public:
    QPushButton *changegrade;
    QPushButton *manage;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QLabel *label_4;
    QTextEdit *search;
    QPushButton *find;
    QLabel *label_6;
    QWidget *page_2;
    QLabel *label_5;
    QPushButton *resetPassword;
    QLabel *label_7;
    QTextEdit *search2;
    QPushButton *find_2;
    QPushButton *grade;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Return;

    void setupUi(QWidget *teachermanage)
    {
        if (teachermanage->objectName().isEmpty())
            teachermanage->setObjectName(QStringLiteral("teachermanage"));
        teachermanage->resize(844, 540);
        changegrade = new QPushButton(teachermanage);
        changegrade->setObjectName(QStringLiteral("changegrade"));
        changegrade->setGeometry(QRect(50, 200, 181, 31));
        changegrade->setCheckable(true);
        changegrade->setAutoExclusive(true);
        manage = new QPushButton(teachermanage);
        manage->setObjectName(QStringLiteral("manage"));
        manage->setGeometry(QRect(50, 230, 181, 31));
        manage->setCheckable(true);
        manage->setAutoExclusive(true);
        stackedWidget = new QStackedWidget(teachermanage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(360, 60, 431, 401));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        label_4 = new QLabel(page_1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 140, 81, 81));
        search = new QTextEdit(page_1);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(80, 40, 211, 31));
        find = new QPushButton(page_1);
        find->setObjectName(QStringLiteral("find"));
        find->setGeometry(QRect(260, 40, 31, 31));
        label_6 = new QLabel(page_1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 121, 31));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 150, 71, 51));
        resetPassword = new QPushButton(page_2);
        resetPassword->setObjectName(QStringLiteral("resetPassword"));
        resetPassword->setGeometry(QRect(290, 90, 91, 31));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 0, 121, 31));
        search2 = new QTextEdit(page_2);
        search2->setObjectName(QStringLiteral("search2"));
        search2->setGeometry(QRect(80, 40, 211, 31));
        find_2 = new QPushButton(page_2);
        find_2->setObjectName(QStringLiteral("find_2"));
        find_2->setGeometry(QRect(260, 40, 31, 31));
        grade = new QPushButton(page_2);
        grade->setObjectName(QStringLiteral("grade"));
        grade->setGeometry(QRect(190, 90, 91, 31));
        stackedWidget->addWidget(page_2);
        label = new QLabel(teachermanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 291, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(teachermanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 101, 61));
        label_2->setFont(font);
        Return = new QPushButton(teachermanage);
        Return->setObjectName(QStringLiteral("Return"));
        Return->setGeometry(QRect(90, 480, 80, 31));

        retranslateUi(teachermanage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(teachermanage);
    } // setupUi

    void retranslateUi(QWidget *teachermanage)
    {
        teachermanage->setWindowTitle(QApplication::translate("teachermanage", "Form", Q_NULLPTR));
        changegrade->setText(QApplication::translate("teachermanage", "\344\277\256\346\224\271\346\210\220\347\273\251                 -->", Q_NULLPTR));
        manage->setText(QApplication::translate("teachermanage", "\345\255\246\347\224\237\347\256\241\347\220\206                 -->", Q_NULLPTR));
        label_4->setText(QApplication::translate("teachermanage", "\344\277\256\346\224\271\346\210\220\347\273\251", Q_NULLPTR));
        find->setText(QString());
        label_6->setText(QApplication::translate("teachermanage", "\350\257\267\346\220\234\347\264\242\345\247\223\345\220\215/\345\255\246\345\217\267", Q_NULLPTR));
        label_5->setText(QString());
        resetPassword->setText(QApplication::translate("teachermanage", "\351\207\215\347\275\256\345\257\206\347\240\201", Q_NULLPTR));
        label_7->setText(QApplication::translate("teachermanage", "\350\257\267\346\220\234\347\264\242\345\247\223\345\220\215/\345\255\246\345\217\267", Q_NULLPTR));
        find_2->setText(QString());
        grade->setText(QApplication::translate("teachermanage", "\346\237\245\347\234\213\346\210\220\347\273\251", Q_NULLPTR));
        label->setText(QApplication::translate("teachermanage", "\345\234\250\347\272\277\350\200\203\350\257\225\345\271\263\345\217\260\357\274\210\346\225\231\345\270\210\347\253\257\357\274\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("teachermanage", "\346\210\220\347\273\251\347\256\241\347\220\206", Q_NULLPTR));
        Return->setText(QApplication::translate("teachermanage", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teachermanage: public Ui_teachermanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERMANAGE_H
