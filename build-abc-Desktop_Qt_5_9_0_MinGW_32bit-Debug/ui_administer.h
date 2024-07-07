/********************************************************************************
** Form generated from reading UI file 'administer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTER_H
#define UI_ADMINISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administer
{
public:
    QPushButton *chagegrade;
    QPushButton *manage;
    QPushButton *importAccount;
    QLabel *label;
    QPushButton *importExcel;

    void setupUi(QWidget *Administer)
    {
        if (Administer->objectName().isEmpty())
            Administer->setObjectName(QStringLiteral("Administer"));
        Administer->resize(763, 429);
        QFont font;
        font.setPointSize(12);
        Administer->setFont(font);
        chagegrade = new QPushButton(Administer);
        chagegrade->setObjectName(QStringLiteral("chagegrade"));
        chagegrade->setGeometry(QRect(10, 110, 181, 31));
        manage = new QPushButton(Administer);
        manage->setObjectName(QStringLiteral("manage"));
        manage->setGeometry(QRect(10, 140, 181, 31));
        importAccount = new QPushButton(Administer);
        importAccount->setObjectName(QStringLiteral("importAccount"));
        importAccount->setGeometry(QRect(10, 170, 181, 31));
        label = new QLabel(Administer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 191, 31));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        importExcel = new QPushButton(Administer);
        importExcel->setObjectName(QStringLiteral("importExcel"));
        importExcel->setGeometry(QRect(670, 390, 80, 31));

        retranslateUi(Administer);

        QMetaObject::connectSlotsByName(Administer);
    } // setupUi

    void retranslateUi(QWidget *Administer)
    {
        Administer->setWindowTitle(QApplication::translate("Administer", "Form", Q_NULLPTR));
        chagegrade->setText(QApplication::translate("Administer", "\344\277\256\346\224\271\346\210\220\347\273\251                 -->", Q_NULLPTR));
        manage->setText(QApplication::translate("Administer", "\345\255\246\347\224\237\347\256\241\347\220\206                 -->", Q_NULLPTR));
        importAccount->setText(QApplication::translate("Administer", "\345\257\274\345\205\245\350\264\246\345\217\267                 -->", Q_NULLPTR));
        label->setText(QApplication::translate("Administer", "\350\200\203\350\257\225\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        importExcel->setText(QApplication::translate("Administer", "\345\257\274\345\205\245Excel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Administer: public Ui_Administer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTER_H
