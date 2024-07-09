/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changePassword
{
public:
    QLineEdit *account;
    QLineEdit *oldPasserword;
    QLineEdit *newPassword;
    QLineEdit *newPassword2;
    QPushButton *finish;
    QPushButton *Return;
    QLabel *label;

    void setupUi(QWidget *changePassword)
    {
        if (changePassword->objectName().isEmpty())
            changePassword->setObjectName(QStringLiteral("changePassword"));
        changePassword->resize(586, 409);
        account = new QLineEdit(changePassword);
        account->setObjectName(QStringLiteral("account"));
        account->setGeometry(QRect(140, 70, 231, 31));
        oldPasserword = new QLineEdit(changePassword);
        oldPasserword->setObjectName(QStringLiteral("oldPasserword"));
        oldPasserword->setGeometry(QRect(140, 120, 231, 31));
        newPassword = new QLineEdit(changePassword);
        newPassword->setObjectName(QStringLiteral("newPassword"));
        newPassword->setGeometry(QRect(140, 170, 231, 31));
        newPassword2 = new QLineEdit(changePassword);
        newPassword2->setObjectName(QStringLiteral("newPassword2"));
        newPassword2->setGeometry(QRect(140, 220, 231, 31));
        finish = new QPushButton(changePassword);
        finish->setObjectName(QStringLiteral("finish"));
        finish->setGeometry(QRect(160, 310, 81, 31));
        QFont font;
        font.setPointSize(12);
        finish->setFont(font);
        Return = new QPushButton(changePassword);
        Return->setObjectName(QStringLiteral("Return"));
        Return->setGeometry(QRect(270, 310, 80, 31));
        Return->setFont(font);
        label = new QLabel(changePassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 20, 141, 31));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);

        retranslateUi(changePassword);

        QMetaObject::connectSlotsByName(changePassword);
    } // setupUi

    void retranslateUi(QWidget *changePassword)
    {
        changePassword->setWindowTitle(QApplication::translate("changePassword", "Form", Q_NULLPTR));
        finish->setText(QApplication::translate("changePassword", "\345\256\214\346\210\220", Q_NULLPTR));
        Return->setText(QApplication::translate("changePassword", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("changePassword", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class changePassword: public Ui_changePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
