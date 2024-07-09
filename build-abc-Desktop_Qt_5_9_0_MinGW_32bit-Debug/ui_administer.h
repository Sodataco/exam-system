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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administer
{
public:
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *EditName;
    QLineEdit *EditAccount;
    QLineEdit *EditPassword;
    QPushButton *pushButton;
    QPushButton *importExcel;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *page_2;
    QLabel *label_4;
    QTextEdit *textEdit;
    QPushButton *find;
    QPushButton *pushButton_3;
    QWidget *page_3;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *changegrade;
    QPushButton *manage;
    QPushButton *importAccount;
    QPushButton *Return;

    void setupUi(QWidget *Administer)
    {
        if (Administer->objectName().isEmpty())
            Administer->setObjectName(QStringLiteral("Administer"));
        Administer->resize(763, 429);
        QFont font;
        font.setPointSize(12);
        Administer->setFont(font);
        label = new QLabel(Administer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 191, 31));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        stackedWidget = new QStackedWidget(Administer);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(260, 20, 431, 401));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        EditName = new QLineEdit(page);
        EditName->setObjectName(QStringLiteral("EditName"));
        EditName->setGeometry(QRect(90, 70, 241, 31));
        EditAccount = new QLineEdit(page);
        EditAccount->setObjectName(QStringLiteral("EditAccount"));
        EditAccount->setGeometry(QRect(90, 110, 241, 31));
        EditPassword = new QLineEdit(page);
        EditPassword->setObjectName(QStringLiteral("EditPassword"));
        EditPassword->setGeometry(QRect(90, 150, 241, 31));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 200, 80, 31));
        importExcel = new QPushButton(page);
        importExcel->setObjectName(QStringLiteral("importExcel"));
        importExcel->setGeometry(QRect(280, 320, 80, 31));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 30, 111, 31));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 320, 121, 31));
        QFont font2;
        font2.setPointSize(14);
        label_3->setFont(font2);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 140, 81, 81));
        textEdit = new QTextEdit(page_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 40, 211, 31));
        find = new QPushButton(page_2);
        find->setObjectName(QStringLiteral("find"));
        find->setGeometry(QRect(190, 100, 16, 16));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 180, 16, 16));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 150, 71, 51));
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 40, 101, 31));
        stackedWidget->addWidget(page_3);
        changegrade = new QPushButton(Administer);
        changegrade->setObjectName(QStringLiteral("changegrade"));
        changegrade->setGeometry(QRect(10, 110, 181, 31));
        changegrade->setCheckable(true);
        changegrade->setAutoExclusive(true);
        manage = new QPushButton(Administer);
        manage->setObjectName(QStringLiteral("manage"));
        manage->setGeometry(QRect(10, 140, 181, 31));
        manage->setCheckable(true);
        manage->setAutoExclusive(true);
        importAccount = new QPushButton(Administer);
        importAccount->setObjectName(QStringLiteral("importAccount"));
        importAccount->setGeometry(QRect(10, 80, 181, 31));
        importAccount->setCheckable(true);
        importAccount->setAutoExclusive(true);
        Return = new QPushButton(Administer);
        Return->setObjectName(QStringLiteral("Return"));
        Return->setGeometry(QRect(20, 370, 80, 31));

        retranslateUi(Administer);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Administer);
    } // setupUi

    void retranslateUi(QWidget *Administer)
    {
        Administer->setWindowTitle(QApplication::translate("Administer", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Administer", "\350\200\203\350\257\225\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Administer", "\345\256\214\346\210\220", Q_NULLPTR));
        importExcel->setText(QApplication::translate("Administer", "\345\257\274\345\205\245Excel", Q_NULLPTR));
        label_2->setText(QApplication::translate("Administer", "\350\257\267\345\257\274\345\205\245\346\226\260\350\264\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("Administer", "\346\211\271\351\207\217\345\257\274\345\205\245\357\274\237 ->", Q_NULLPTR));
        label_4->setText(QApplication::translate("Administer", "\344\277\256\346\224\271\346\210\220\347\273\251", Q_NULLPTR));
        find->setText(QString());
        pushButton_3->setText(QString());
        label_5->setText(QString());
        pushButton_2->setText(QApplication::translate("Administer", "PushButton", Q_NULLPTR));
        changegrade->setText(QApplication::translate("Administer", "\344\277\256\346\224\271\346\210\220\347\273\251                 -->", Q_NULLPTR));
        manage->setText(QApplication::translate("Administer", "\345\255\246\347\224\237\347\256\241\347\220\206                 -->", Q_NULLPTR));
        importAccount->setText(QApplication::translate("Administer", "\345\257\274\345\205\245\350\264\246\345\217\267                 -->", Q_NULLPTR));
        Return->setText(QApplication::translate("Administer", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Administer: public Ui_Administer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTER_H
