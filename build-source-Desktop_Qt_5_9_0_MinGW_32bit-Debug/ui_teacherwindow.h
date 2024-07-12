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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherwindow
{
public:
    QPushButton *judge;
    QPushButton *paper;
    QPushButton *Return1;
    QPushButton *createquestion;
    QPushButton *manage;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *teacherwindow)
    {
        if (teacherwindow->objectName().isEmpty())
            teacherwindow->setObjectName(QStringLiteral("teacherwindow"));
        teacherwindow->resize(605, 430);
        teacherwindow->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color:white;\n"
"}"));
        judge = new QPushButton(teacherwindow);
        judge->setObjectName(QStringLiteral("judge"));
        judge->setGeometry(QRect(0, 170, 171, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font.setPointSize(22);
        judge->setFont(font);
        judge->setStyleSheet(QLatin1String("QPushButton\n"
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
        paper = new QPushButton(teacherwindow);
        paper->setObjectName(QStringLiteral("paper"));
        paper->setEnabled(true);
        paper->setGeometry(QRect(0, 130, 171, 41));
        paper->setFont(font);
        paper->setStyleSheet(QLatin1String("QPushButton\n"
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
        paper->setCheckable(false);
        Return1 = new QPushButton(teacherwindow);
        Return1->setObjectName(QStringLiteral("Return1"));
        Return1->setEnabled(true);
        Return1->setGeometry(QRect(0, 250, 171, 41));
        Return1->setFont(font);
        Return1->setStyleSheet(QLatin1String("QPushButton\n"
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
        Return1->setCheckable(false);
        createquestion = new QPushButton(teacherwindow);
        createquestion->setObjectName(QStringLiteral("createquestion"));
        createquestion->setGeometry(QRect(0, 90, 171, 41));
        createquestion->setFont(font);
        createquestion->setStyleSheet(QLatin1String("QPushButton\n"
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
        manage = new QPushButton(teacherwindow);
        manage->setObjectName(QStringLiteral("manage"));
        manage->setGeometry(QRect(0, 210, 171, 41));
        manage->setFont(font);
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
"\n"
""));
        manage->setCheckable(false);
        label_4 = new QLabel(teacherwindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 10, 31, 31));
        label_4->setStyleSheet(QLatin1String("QLabel#label_4\n"
"{\n"
"background-color:transparent;\n"
"}\n"
""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/image/logo.png")));
        label_4->setScaledContents(true);
        label_2 = new QLabel(teacherwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 171, 431));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/background2.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(teacherwindow);
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
        label = new QLabel(teacherwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 40, 61, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/teacherphoto.png")));
        label->setScaledContents(true);
        textBrowser = new QTextBrowser(teacherwindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(290, 120, 256, 192));
        label_2->raise();
        judge->raise();
        paper->raise();
        Return1->raise();
        createquestion->raise();
        manage->raise();
        label_3->raise();
        label_4->raise();
        label->raise();
        textBrowser->raise();

        retranslateUi(teacherwindow);

        QMetaObject::connectSlotsByName(teacherwindow);
    } // setupUi

    void retranslateUi(QWidget *teacherwindow)
    {
        teacherwindow->setWindowTitle(QApplication::translate("teacherwindow", "Form", Q_NULLPTR));
        judge->setText(QApplication::translate("teacherwindow", "\346\211\271\346\224\271", Q_NULLPTR));
        paper->setText(QApplication::translate("teacherwindow", "\347\273\204\345\215\267", Q_NULLPTR));
        Return1->setText(QApplication::translate("teacherwindow", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        createquestion->setText(QApplication::translate("teacherwindow", "\351\242\230\345\272\223", Q_NULLPTR));
        manage->setText(QApplication::translate("teacherwindow", "\346\210\220\347\273\251\347\256\241\347\220\206", Q_NULLPTR));
        label_4->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("teacherwindow", "\347\272\277\344\270\212\350\200\203\350\257\225\345\271\263\345\217\260 \346\225\231\345\270\210\347\253\257", Q_NULLPTR));
        label->setText(QString());
        textBrowser->setHtml(QApplication::translate("teacherwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\347\217\255\347\272\247\344\277\241\346\201\257\357\274\232</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teacherwindow: public Ui_teacherwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERWINDOW_H
