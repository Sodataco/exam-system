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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administer
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *EditName;
    QLineEdit *EditAccount;
    QLineEdit *EditPassword;
    QPushButton *finishimport;
    QPushButton *importExcel;
    QTextEdit *EditClass;
    QLabel *label;
    QWidget *page_2;
    QLabel *label_4;
    QTextEdit *search;
    QPushButton *find;
    QWidget *page_3;
    QLabel *label_5;
    QPushButton *resetPassword;
    QLabel *label_7;
    QTextEdit *search2;
    QPushButton *find_2;
    QPushButton *grade;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_8;
    QPushButton *importAccount;
    QLabel *label_11;
    QTextBrowser *textBrowser;
    QPushButton *changegrade;
    QPushButton *manage;
    QPushButton *Return;

    void setupUi(QWidget *Administer)
    {
        if (Administer->objectName().isEmpty())
            Administer->setObjectName(QStringLiteral("Administer"));
        Administer->resize(772, 461);
        QFont font;
        font.setPointSize(12);
        Administer->setFont(font);
        Administer->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color:white;\n"
"}"));
        stackedWidget = new QStackedWidget(Administer);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(180, 0, 391, 401));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        EditName = new QLineEdit(page);
        EditName->setObjectName(QStringLiteral("EditName"));
        EditName->setGeometry(QRect(70, 110, 241, 31));
        EditAccount = new QLineEdit(page);
        EditAccount->setObjectName(QStringLiteral("EditAccount"));
        EditAccount->setGeometry(QRect(70, 150, 241, 31));
        EditPassword = new QLineEdit(page);
        EditPassword->setObjectName(QStringLiteral("EditPassword"));
        EditPassword->setGeometry(QRect(70, 190, 241, 31));
        finishimport = new QPushButton(page);
        finishimport->setObjectName(QStringLiteral("finishimport"));
        finishimport->setGeometry(QRect(120, 280, 141, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font1.setPointSize(18);
        finishimport->setFont(font1);
        finishimport->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(76, 114, 148);\n"
"color:white;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(53, 87, 122);\n"
"\n"
"}\n"
""));
        importExcel = new QPushButton(page);
        importExcel->setObjectName(QStringLiteral("importExcel"));
        importExcel->setGeometry(QRect(120, 340, 141, 41));
        importExcel->setFont(font1);
        importExcel->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(76, 114, 148);\n"
"color:white;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(53, 87, 122);\n"
"\n"
"}\n"
""));
        EditClass = new QTextEdit(page);
        EditClass->setObjectName(QStringLiteral("EditClass"));
        EditClass->setGeometry(QRect(70, 230, 241, 31));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 191, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font2.setPointSize(20);
        label->setFont(font2);
        stackedWidget->addWidget(page);
        EditName->raise();
        EditAccount->raise();
        EditPassword->raise();
        finishimport->raise();
        importExcel->raise();
        EditClass->raise();
        label->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 140, 81, 41));
        label_4->setFont(font2);
        search = new QTextEdit(page_2);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(70, 190, 211, 31));
        find = new QPushButton(page_2);
        find->setObjectName(QStringLiteral("find"));
        find->setGeometry(QRect(280, 190, 31, 31));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 170, 71, 51));
        resetPassword = new QPushButton(page_3);
        resetPassword->setObjectName(QStringLiteral("resetPassword"));
        resetPassword->setGeometry(QRect(130, 300, 91, 31));
        resetPassword->setFont(font1);
        resetPassword->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(76, 114, 148);\n"
"color:white;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(53, 87, 122);\n"
"\n"
"}\n"
""));
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 90, 121, 31));
        label_7->setFont(font2);
        search2 = new QTextEdit(page_3);
        search2->setObjectName(QStringLiteral("search2"));
        search2->setGeometry(QRect(60, 140, 211, 31));
        find_2 = new QPushButton(page_3);
        find_2->setObjectName(QStringLiteral("find_2"));
        find_2->setGeometry(QRect(270, 140, 31, 31));
        grade = new QPushButton(page_3);
        grade->setObjectName(QStringLiteral("grade"));
        grade->setGeometry(QRect(130, 190, 91, 31));
        grade->setFont(font1);
        grade->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(76, 114, 148);\n"
"color:white;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(53, 87, 122);\n"
"\n"
"}\n"
""));
        label_12 = new QLabel(page_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(60, 240, 121, 31));
        label_12->setFont(font2);
        stackedWidget->addWidget(page_3);
        label_9 = new QLabel(Administer);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 171, 461));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/image/background2.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(Administer);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 10, 31, 31));
        label_10->setStyleSheet(QLatin1String("QLabel#label_10\n"
"{\n"
"background-color:transparent;\n"
"}\n"
""));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/image/logo.png")));
        label_10->setScaledContents(true);
        label_8 = new QLabel(Administer);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 50, 181, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font3.setPointSize(17);
        label_8->setFont(font3);
        label_8->setStyleSheet(QLatin1String("QLabel#label_8\n"
"{\n"
"color:white;\n"
"background-color:transparent;\n"
"}"));
        importAccount = new QPushButton(Administer);
        importAccount->setObjectName(QStringLiteral("importAccount"));
        importAccount->setGeometry(QRect(0, 90, 171, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font4.setPointSize(16);
        importAccount->setFont(font4);
        importAccount->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(76, 114, 148);\n"
"color:white;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(53, 87, 122);\n"
"\n"
"}\n"
""));
        importAccount->setCheckable(true);
        importAccount->setAutoExclusive(true);
        label_11 = new QLabel(Administer);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(620, 30, 71, 71));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/image/administerphoto.png")));
        label_11->setScaledContents(true);
        textBrowser = new QTextBrowser(Administer);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(570, 110, 191, 192));
        changegrade = new QPushButton(Administer);
        changegrade->setObjectName(QStringLiteral("changegrade"));
        changegrade->setGeometry(QRect(0, 140, 171, 51));
        changegrade->setFont(font4);
        changegrade->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(76, 114, 148);\n"
"color:white;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(53, 87, 122);\n"
"\n"
"}\n"
""));
        changegrade->setCheckable(true);
        changegrade->setAutoExclusive(true);
        manage = new QPushButton(Administer);
        manage->setObjectName(QStringLiteral("manage"));
        manage->setGeometry(QRect(0, 190, 171, 51));
        manage->setFont(font4);
        manage->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(76, 114, 148);\n"
"color:white;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(53, 87, 122);\n"
"\n"
"}\n"
""));
        manage->setCheckable(true);
        manage->setAutoExclusive(true);
        Return = new QPushButton(Administer);
        Return->setObjectName(QStringLiteral("Return"));
        Return->setGeometry(QRect(0, 240, 171, 51));
        Return->setFont(font4);
        Return->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(76, 114, 148);\n"
"color:white;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(53, 87, 122);\n"
"\n"
"}\n"
""));
        label_9->raise();
        label_10->raise();
        stackedWidget->raise();
        label_8->raise();
        importAccount->raise();
        label_11->raise();
        textBrowser->raise();
        changegrade->raise();
        manage->raise();
        Return->raise();

        retranslateUi(Administer);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Administer);
    } // setupUi

    void retranslateUi(QWidget *Administer)
    {
        Administer->setWindowTitle(QApplication::translate("Administer", "Form", Q_NULLPTR));
        finishimport->setText(QApplication::translate("Administer", "\345\256\214\346\210\220", Q_NULLPTR));
        importExcel->setText(QApplication::translate("Administer", "\346\211\271\351\207\217\345\257\274\345\205\245", Q_NULLPTR));
        label->setText(QApplication::translate("Administer", "\345\257\274\345\205\245\345\215\225\344\270\252\350\264\246\345\217\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("Administer", "\344\277\256\346\224\271\346\210\220\347\273\251", Q_NULLPTR));
        find->setText(QString());
        label_5->setText(QString());
        resetPassword->setText(QApplication::translate("Administer", "\351\207\215\347\275\256\345\257\206\347\240\201", Q_NULLPTR));
        label_7->setText(QApplication::translate("Administer", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206", Q_NULLPTR));
        find_2->setText(QString());
        grade->setText(QApplication::translate("Administer", "\346\237\245\347\234\213\346\210\220\347\273\251", Q_NULLPTR));
        label_12->setText(QApplication::translate("Administer", "\345\255\246\347\224\237\345\257\206\347\240\201\347\256\241\347\220\206", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QString());
        label_8->setText(QApplication::translate("Administer", "\347\272\277\344\270\212\350\200\203\350\257\225\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230\347\253\257", Q_NULLPTR));
        importAccount->setText(QApplication::translate("Administer", " \345\257\274\345\205\245\350\264\246\345\217\267               -->", Q_NULLPTR));
        label_11->setText(QString());
        textBrowser->setHtml(QApplication::translate("Administer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\347\217\255\347\272\247\357\274\232</span></p></body></html>", Q_NULLPTR));
        changegrade->setText(QApplication::translate("Administer", " \344\277\256\346\224\271\346\210\220\347\273\251                -->", Q_NULLPTR));
        manage->setText(QApplication::translate("Administer", " \345\255\246\347\224\237\347\256\241\347\220\206               -->", Q_NULLPTR));
        Return->setText(QApplication::translate("Administer", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Administer: public Ui_Administer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTER_H
