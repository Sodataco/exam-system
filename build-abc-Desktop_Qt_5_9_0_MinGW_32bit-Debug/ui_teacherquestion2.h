/********************************************************************************
** Form generated from reading UI file 'teacherquestion2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERQUESTION2_H
#define UI_TEACHERQUESTION2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherquestion2
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QPushButton *pushButton_4;
    QLabel *label_3;

    void setupUi(QWidget *teacherquestion2)
    {
        if (teacherquestion2->objectName().isEmpty())
            teacherquestion2->setObjectName(QStringLiteral("teacherquestion2"));
        teacherquestion2->resize(717, 541);
        verticalLayoutWidget = new QWidget(teacherquestion2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 150, 111, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        label = new QLabel(teacherquestion2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 291, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(teacherquestion2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 121, 21));
        scrollArea = new QScrollArea(teacherquestion2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(230, 0, 491, 541));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 489, 539));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(470, 0, 16, 541));
        verticalScrollBar->setOrientation(Qt::Vertical);
        verticalLayoutWidget_2 = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 471, 541));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);

        textBrowser_2 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        verticalLayout_2->addWidget(textBrowser_2);

        textBrowser_3 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));

        verticalLayout_2->addWidget(textBrowser_3);

        textBrowser_4 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));

        verticalLayout_2->addWidget(textBrowser_4);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font1.setPointSize(20);
        pushButton_4->setFont(font1);

        verticalLayout_2->addWidget(pushButton_4);

        scrollArea->setWidget(scrollAreaWidgetContents);
        label_3 = new QLabel(teacherquestion2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 490, 291, 61));
        label_3->setFont(font);

        retranslateUi(teacherquestion2);

        QMetaObject::connectSlotsByName(teacherquestion2);
    } // setupUi

    void retranslateUi(QWidget *teacherquestion2)
    {
        teacherquestion2->setWindowTitle(QApplication::translate("teacherquestion2", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("teacherquestion2", "\351\200\211\346\213\251\351\242\230", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("teacherquestion2", "\345\241\253\347\251\272\351\242\230", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("teacherquestion2", "\347\256\200\347\255\224\351\242\230", Q_NULLPTR));
        label->setText(QApplication::translate("teacherquestion2", "\345\234\250\347\272\277\350\200\203\350\257\225\345\271\263\345\217\260\357\274\210\346\225\231\345\270\210\347\253\257\357\274\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("teacherquestion2", "<html><head/><body><p><span style=\" font-size:20pt;\">\351\242\230\345\272\223</span></p></body></html>", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("teacherquestion2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\351\242\230\347\233\256\357\274\232</span></p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("teacherquestion2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\345\217\202\350\200\203\347\255\224\346\241\210\357\274\232</span></p></body></html>", Q_NULLPTR));
        textBrowser_3->setHtml(QApplication::translate("teacherquestion2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\351\242\230\347\233\256\357\274\232</span></p></body></html>", Q_NULLPTR));
        textBrowser_4->setHtml(QApplication::translate("teacherquestion2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\345\217\202\350\200\203\347\255\224\346\241\210\357\274\232</span></p></body></html>", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("teacherquestion2", "\346\267\273\345\212\240", Q_NULLPTR));
        label_3->setText(QApplication::translate("teacherquestion2", "\345\234\250\347\272\277\350\200\203\350\257\225\345\271\263\345\217\260\357\274\210\346\225\231\345\270\210\347\253\257\357\274\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teacherquestion2: public Ui_teacherquestion2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERQUESTION2_H
