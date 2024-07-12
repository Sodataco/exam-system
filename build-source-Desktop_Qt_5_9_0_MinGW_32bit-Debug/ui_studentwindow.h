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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentwindow
{
public:
    QPushButton *loginagain;
    QPushButton *examBtn;
    QPushButton *findBtn;
    QPushButton *changePassword;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *studentwindow)
    {
        if (studentwindow->objectName().isEmpty())
            studentwindow->setObjectName(QStringLiteral("studentwindow"));
        studentwindow->resize(593, 430);
        studentwindow->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color:rgb(255, 255, 255);\n"
"}\n"
""));
        loginagain = new QPushButton(studentwindow);
        loginagain->setObjectName(QStringLiteral("loginagain"));
        loginagain->setGeometry(QRect(0, 240, 171, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font.setPointSize(22);
        loginagain->setFont(font);
        loginagain->setStyleSheet(QLatin1String("QPushButton\n"
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
        examBtn = new QPushButton(studentwindow);
        examBtn->setObjectName(QStringLiteral("examBtn"));
        examBtn->setGeometry(QRect(0, 90, 171, 51));
        examBtn->setFont(font);
        examBtn->setStyleSheet(QLatin1String("QPushButton\n"
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
        findBtn = new QPushButton(studentwindow);
        findBtn->setObjectName(QStringLiteral("findBtn"));
        findBtn->setGeometry(QRect(0, 140, 171, 51));
        findBtn->setFont(font);
        findBtn->setStyleSheet(QLatin1String("QPushButton\n"
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
        changePassword = new QPushButton(studentwindow);
        changePassword->setObjectName(QStringLiteral("changePassword"));
        changePassword->setGeometry(QRect(0, 190, 171, 51));
        changePassword->setFont(font);
        changePassword->setStyleSheet(QLatin1String("QPushButton\n"
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
        label_2 = new QLabel(studentwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 171, 431));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/background2.png")));
        label_2->setScaledContents(true);
        label = new QLabel(studentwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 40, 91, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/photo.png")));
        label->setScaledContents(true);
        label_3 = new QLabel(studentwindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 30, 171, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font1.setPointSize(18);
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("QLabel#label_3{\n"
"background-color:transparent;\n"
"color:white;\n"
"}"));
        label_4 = new QLabel(studentwindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 10, 31, 31));
        label_4->setStyleSheet(QLatin1String("QLabel#label_4\n"
"{\n"
"background-color:transparent;\n"
"}\n"
""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/image/logo.png")));
        label_4->setScaledContents(true);
        textBrowser = new QTextBrowser(studentwindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(330, 150, 256, 192));
        label_2->raise();
        loginagain->raise();
        examBtn->raise();
        findBtn->raise();
        changePassword->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        textBrowser->raise();

        retranslateUi(studentwindow);

        QMetaObject::connectSlotsByName(studentwindow);
    } // setupUi

    void retranslateUi(QWidget *studentwindow)
    {
        studentwindow->setWindowTitle(QApplication::translate("studentwindow", "Form", Q_NULLPTR));
        loginagain->setText(QApplication::translate("studentwindow", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        examBtn->setText(QApplication::translate("studentwindow", "\350\200\203\350\257\225", Q_NULLPTR));
        findBtn->setText(QApplication::translate("studentwindow", "\346\237\245\345\210\206", Q_NULLPTR));
        changePassword->setText(QApplication::translate("studentwindow", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
        label_3->setText(QApplication::translate("studentwindow", "\347\272\277\344\270\212\350\200\203\350\257\225\345\271\263\345\217\260 \345\255\246\347\224\237\347\253\257", Q_NULLPTR));
        label_4->setText(QString());
        textBrowser->setHtml(QApplication::translate("studentwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\345\247\223\345\220\215\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\347\217\255\347\272\247\357\274\232</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studentwindow: public Ui_studentwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWINDOW_H
