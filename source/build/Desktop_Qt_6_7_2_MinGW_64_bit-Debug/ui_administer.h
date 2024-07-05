/********************************************************************************
** Form generated from reading UI file 'administer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTER_H
#define UI_ADMINISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administer
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Administer)
    {
        if (Administer->objectName().isEmpty())
            Administer->setObjectName("Administer");
        Administer->resize(400, 300);
        QFont font;
        font.setPointSize(20);
        Administer->setFont(font);
        pushButton = new QPushButton(Administer);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 70, 151, 91));
        pushButton_2 = new QPushButton(Administer);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 70, 161, 91));

        retranslateUi(Administer);

        QMetaObject::connectSlotsByName(Administer);
    } // setupUi

    void retranslateUi(QWidget *Administer)
    {
        Administer->setWindowTitle(QCoreApplication::translate("Administer", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Administer", "\344\277\256\346\224\271\346\210\220\347\273\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Administer", "\345\255\246\347\224\237\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Administer: public Ui_Administer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTER_H
