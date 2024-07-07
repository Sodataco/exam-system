/********************************************************************************
** Form generated from reading UI file 'teacherquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERQUESTION_H
#define UI_TEACHERQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherquestion
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser_2;
    QCommandLinkButton *commandLinkButton_4;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_5;
    QLabel *label_3;

    void setupUi(QWidget *teacherquestion)
    {
        if (teacherquestion->objectName().isEmpty())
            teacherquestion->setObjectName(QStringLiteral("teacherquestion"));
        teacherquestion->resize(726, 514);
        QFont font;
        font.setPointSize(20);
        teacherquestion->setFont(font);
        label = new QLabel(teacherquestion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 291, 61));
        label->setFont(font);
        label_2 = new QLabel(teacherquestion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 121, 21));
        verticalLayoutWidget = new QWidget(teacherquestion);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 110, 111, 291));
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

        pushButton_4 = new QPushButton(teacherquestion);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(70, 460, 81, 31));
        scrollArea = new QScrollArea(teacherquestion);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(230, 0, 491, 521));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 489, 519));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(470, 0, 16, 511));
        verticalScrollBar->setOrientation(Qt::Vertical);
        verticalLayoutWidget_2 = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 471, 374));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowser_2 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        verticalLayout_2->addWidget(textBrowser_2);

        commandLinkButton_4 = new QCommandLinkButton(verticalLayoutWidget_2);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));

        verticalLayout_2->addWidget(commandLinkButton_4);

        commandLinkButton_3 = new QCommandLinkButton(verticalLayoutWidget_2);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));

        verticalLayout_2->addWidget(commandLinkButton_3);

        commandLinkButton_2 = new QCommandLinkButton(verticalLayoutWidget_2);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));

        verticalLayout_2->addWidget(commandLinkButton_2);

        commandLinkButton = new QCommandLinkButton(verticalLayoutWidget_2);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));

        verticalLayout_2->addWidget(commandLinkButton);

        commandLinkButton_5 = new QCommandLinkButton(scrollAreaWidgetContents);
        commandLinkButton_5->setObjectName(QStringLiteral("commandLinkButton_5"));
        commandLinkButton_5->setGeometry(QRect(0, 370, 469, 36));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_3 = new QLabel(teacherquestion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(440, 440, 291, 61));
        label_3->setFont(font);

        retranslateUi(teacherquestion);

        QMetaObject::connectSlotsByName(teacherquestion);
    } // setupUi

    void retranslateUi(QWidget *teacherquestion)
    {
        teacherquestion->setWindowTitle(QApplication::translate("teacherquestion", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("teacherquestion", "\345\234\250\347\272\277\350\200\203\350\257\225\345\271\263\345\217\260\357\274\210\346\225\231\345\270\210\347\253\257\357\274\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("teacherquestion", "<html><head/><body><p><span style=\" font-size:20pt;\">\351\242\230\345\272\223</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("teacherquestion", "\351\200\211\346\213\251\351\242\230", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("teacherquestion", "\345\241\253\347\251\272\351\242\230", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("teacherquestion", "\347\256\200\347\255\224\351\242\230", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("teacherquestion", "\351\200\200\345\207\272", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("teacherquestion", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">\351\242\230\347\233\256\357\274\232</span></p></body></html>", Q_NULLPTR));
        commandLinkButton_4->setText(QApplication::translate("teacherquestion", "A", Q_NULLPTR));
        commandLinkButton_3->setText(QApplication::translate("teacherquestion", "B", Q_NULLPTR));
        commandLinkButton_2->setText(QApplication::translate("teacherquestion", "C", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("teacherquestion", "D", Q_NULLPTR));
        commandLinkButton_5->setText(QApplication::translate("teacherquestion", "\346\267\273\345\212\240", Q_NULLPTR));
        label_3->setText(QApplication::translate("teacherquestion", "\345\234\250\347\272\277\350\200\203\350\257\225\345\271\263\345\217\260\357\274\210\346\225\231\345\270\210\347\253\257\357\274\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teacherquestion: public Ui_teacherquestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERQUESTION_H
