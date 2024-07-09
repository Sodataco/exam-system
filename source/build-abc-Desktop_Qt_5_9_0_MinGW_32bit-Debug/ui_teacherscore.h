/********************************************************************************
** Form generated from reading UI file 'teacherscore.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERSCORE_H
#define UI_TEACHERSCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherscore
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser_3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_35;
    QRadioButton *radioButton_37;
    QRadioButton *radioButton_36;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_20;
    QRadioButton *radioButton_33;
    QRadioButton *radioButton_34;
    QRadioButton *radioButton_31;
    QRadioButton *radioButton_32;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_48;
    QRadioButton *radioButton_49;
    QRadioButton *radioButton_39;
    QRadioButton *radioButton_40;
    QRadioButton *radioButton_38;
    QRadioButton *radioButton_47;
    QRadioButton *radioButton_41;
    QRadioButton *radioButton_42;
    QRadioButton *radioButton_44;
    QRadioButton *radioButton_45;
    QRadioButton *radioButton_43;
    QRadioButton *radioButton_46;
    QRadioButton *radioButton_50;
    QProgressBar *progressBar;

    void setupUi(QWidget *teacherscore)
    {
        if (teacherscore->objectName().isEmpty())
            teacherscore->setObjectName(QStringLiteral("teacherscore"));
        teacherscore->resize(737, 527);
        label = new QLabel(teacherscore);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 291, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(teacherscore);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 291, 61));
        label_2->setFont(font);
        textBrowser = new QTextBrowser(teacherscore);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(240, 30, 491, 241));
        textBrowser_2 = new QTextBrowser(teacherscore);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(240, 270, 491, 161));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        textBrowser_2->setFont(font1);
        pushButton = new QPushButton(teacherscore);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 480, 141, 31));
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(teacherscore);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 480, 141, 31));
        pushButton_2->setFont(font1);
        textBrowser_3 = new QTextBrowser(teacherscore);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(240, 430, 491, 41));
        gridLayoutWidget_2 = new QWidget(teacherscore);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 170, 161, 161));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_35 = new QRadioButton(gridLayoutWidget_2);
        radioButton_35->setObjectName(QStringLiteral("radioButton_35"));

        gridLayout_2->addWidget(radioButton_35, 4, 0, 1, 1);

        radioButton_37 = new QRadioButton(gridLayoutWidget_2);
        radioButton_37->setObjectName(QStringLiteral("radioButton_37"));

        gridLayout_2->addWidget(radioButton_37, 3, 2, 1, 1);

        radioButton_36 = new QRadioButton(gridLayoutWidget_2);
        radioButton_36->setObjectName(QStringLiteral("radioButton_36"));

        gridLayout_2->addWidget(radioButton_36, 3, 0, 1, 1);

        radioButton_15 = new QRadioButton(gridLayoutWidget_2);
        radioButton_15->setObjectName(QStringLiteral("radioButton_15"));

        gridLayout_2->addWidget(radioButton_15, 2, 0, 1, 1);

        radioButton_11 = new QRadioButton(gridLayoutWidget_2);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));

        gridLayout_2->addWidget(radioButton_11, 0, 2, 1, 1);

        radioButton_12 = new QRadioButton(gridLayoutWidget_2);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));

        gridLayout_2->addWidget(radioButton_12, 1, 2, 1, 1);

        radioButton_20 = new QRadioButton(gridLayoutWidget_2);
        radioButton_20->setObjectName(QStringLiteral("radioButton_20"));

        gridLayout_2->addWidget(radioButton_20, 2, 1, 1, 1);

        radioButton_33 = new QRadioButton(gridLayoutWidget_2);
        radioButton_33->setObjectName(QStringLiteral("radioButton_33"));

        gridLayout_2->addWidget(radioButton_33, 1, 3, 1, 1);

        radioButton_34 = new QRadioButton(gridLayoutWidget_2);
        radioButton_34->setObjectName(QStringLiteral("radioButton_34"));

        gridLayout_2->addWidget(radioButton_34, 3, 3, 1, 1);

        radioButton_31 = new QRadioButton(gridLayoutWidget_2);
        radioButton_31->setObjectName(QStringLiteral("radioButton_31"));

        gridLayout_2->addWidget(radioButton_31, 0, 0, 1, 1);

        radioButton_32 = new QRadioButton(gridLayoutWidget_2);
        radioButton_32->setObjectName(QStringLiteral("radioButton_32"));

        gridLayout_2->addWidget(radioButton_32, 4, 3, 1, 1);

        radioButton_9 = new QRadioButton(gridLayoutWidget_2);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));

        gridLayout_2->addWidget(radioButton_9, 0, 1, 1, 1);

        radioButton_48 = new QRadioButton(gridLayoutWidget_2);
        radioButton_48->setObjectName(QStringLiteral("radioButton_48"));

        gridLayout_2->addWidget(radioButton_48, 0, 4, 1, 1);

        radioButton_49 = new QRadioButton(gridLayoutWidget_2);
        radioButton_49->setObjectName(QStringLiteral("radioButton_49"));

        gridLayout_2->addWidget(radioButton_49, 3, 4, 1, 1);

        radioButton_39 = new QRadioButton(gridLayoutWidget_2);
        radioButton_39->setObjectName(QStringLiteral("radioButton_39"));

        gridLayout_2->addWidget(radioButton_39, 3, 1, 1, 1);

        radioButton_40 = new QRadioButton(gridLayoutWidget_2);
        radioButton_40->setObjectName(QStringLiteral("radioButton_40"));

        gridLayout_2->addWidget(radioButton_40, 4, 2, 1, 1);

        radioButton_38 = new QRadioButton(gridLayoutWidget_2);
        radioButton_38->setObjectName(QStringLiteral("radioButton_38"));

        gridLayout_2->addWidget(radioButton_38, 1, 0, 1, 1);

        radioButton_47 = new QRadioButton(gridLayoutWidget_2);
        radioButton_47->setObjectName(QStringLiteral("radioButton_47"));

        gridLayout_2->addWidget(radioButton_47, 1, 4, 1, 1);

        radioButton_41 = new QRadioButton(gridLayoutWidget_2);
        radioButton_41->setObjectName(QStringLiteral("radioButton_41"));

        gridLayout_2->addWidget(radioButton_41, 4, 1, 1, 1);

        radioButton_42 = new QRadioButton(gridLayoutWidget_2);
        radioButton_42->setObjectName(QStringLiteral("radioButton_42"));

        gridLayout_2->addWidget(radioButton_42, 2, 3, 1, 1);

        radioButton_44 = new QRadioButton(gridLayoutWidget_2);
        radioButton_44->setObjectName(QStringLiteral("radioButton_44"));

        gridLayout_2->addWidget(radioButton_44, 4, 4, 1, 1);

        radioButton_45 = new QRadioButton(gridLayoutWidget_2);
        radioButton_45->setObjectName(QStringLiteral("radioButton_45"));

        gridLayout_2->addWidget(radioButton_45, 0, 3, 1, 1);

        radioButton_43 = new QRadioButton(gridLayoutWidget_2);
        radioButton_43->setObjectName(QStringLiteral("radioButton_43"));

        gridLayout_2->addWidget(radioButton_43, 1, 1, 1, 1);

        radioButton_46 = new QRadioButton(gridLayoutWidget_2);
        radioButton_46->setObjectName(QStringLiteral("radioButton_46"));

        gridLayout_2->addWidget(radioButton_46, 2, 4, 1, 1);

        radioButton_50 = new QRadioButton(gridLayoutWidget_2);
        radioButton_50->setObjectName(QStringLiteral("radioButton_50"));

        gridLayout_2->addWidget(radioButton_50, 2, 2, 1, 1);

        progressBar = new QProgressBar(teacherscore);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(40, 480, 161, 23));
        progressBar->setValue(24);

        retranslateUi(teacherscore);

        QMetaObject::connectSlotsByName(teacherscore);
    } // setupUi

    void retranslateUi(QWidget *teacherscore)
    {
        teacherscore->setWindowTitle(QApplication::translate("teacherscore", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("teacherscore", "\345\234\250\347\272\277\350\200\203\350\257\225\345\271\263\345\217\260\357\274\210\346\225\231\345\270\210\347\253\257\357\274\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("teacherscore", "\346\211\271\346\224\271", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("teacherscore", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\351\242\230\347\233\256\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:20pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:20pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-"
                        "indent:0px; font-size:20pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:20pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\345\217\202\350\200\203\347\255\224\346\241\210\357\274\232</span></p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("teacherscore", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Agency FB'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">\345\255\246\347\224\237\344\275\234\347\255\224\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("teacherscore", "\344\270\212\344\270\200\345\274\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("teacherscore", "\344\270\213\344\270\200\345\274\240", Q_NULLPTR));
        textBrowser_3->setHtml(QApplication::translate("teacherscore", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\346\211\223\345\210\206\357\274\232</span></p></body></html>", Q_NULLPTR));
        radioButton_35->setText(QString());
        radioButton_37->setText(QString());
        radioButton_36->setText(QString());
        radioButton_15->setText(QString());
        radioButton_11->setText(QString());
        radioButton_12->setText(QString());
        radioButton_20->setText(QString());
        radioButton_33->setText(QString());
        radioButton_34->setText(QString());
        radioButton_31->setText(QString());
        radioButton_32->setText(QString());
        radioButton_9->setText(QString());
        radioButton_48->setText(QString());
        radioButton_49->setText(QString());
        radioButton_39->setText(QString());
        radioButton_40->setText(QString());
        radioButton_38->setText(QString());
        radioButton_47->setText(QString());
        radioButton_41->setText(QString());
        radioButton_42->setText(QString());
        radioButton_44->setText(QString());
        radioButton_45->setText(QString());
        radioButton_43->setText(QString());
        radioButton_46->setText(QString());
        radioButton_50->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class teacherscore: public Ui_teacherscore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERSCORE_H
