/********************************************************************************
** Form generated from reading UI file 'teacherpaper.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERPAPER_H
#define UI_TEACHERPAPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherpaper
{
public:
    QLabel *label;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_19;
    QRadioButton *radioButton_21;
    QRadioButton *radioButton_18;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_16;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_17;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_23;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_22;
    QRadioButton *radioButton_24;
    QRadioButton *radioButton_26;
    QRadioButton *radioButton_25;
    QRadioButton *radioButton_27;
    QRadioButton *radioButton_28;
    QRadioButton *radioButton_30;
    QRadioButton *radioButton_29;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTextEdit *textEdit_6;
    QLabel *label_10;
    QWidget *page_5;
    QLabel *label_13;
    QTextEdit *textEdit_9;
    QLabel *label_14;
    QTextEdit *textEdit_10;
    QWidget *page_4;
    QTextEdit *textEdit_7;
    QLabel *label_11;
    QTextEdit *textEdit_8;
    QLabel *label_12;

    void setupUi(QWidget *teacherpaper)
    {
        if (teacherpaper->objectName().isEmpty())
            teacherpaper->setObjectName(QStringLiteral("teacherpaper"));
        teacherpaper->resize(729, 528);
        label = new QLabel(teacherpaper);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 291, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(teacherpaper);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 121, 61));
        scrollArea = new QScrollArea(teacherpaper);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 280, 251, 221));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 249, 219));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(231, 0, 20, 221));
        verticalScrollBar->setOrientation(Qt::Vertical);
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 231, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font1.setPointSize(20);
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_2 = new QPushButton(teacherpaper);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 500, 251, 29));
        pushButton_2->setFont(font1);
        gridLayoutWidget = new QWidget(teacherpaper);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 110, 151, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_19 = new QRadioButton(gridLayoutWidget);
        radioButton_19->setObjectName(QStringLiteral("radioButton_19"));

        gridLayout->addWidget(radioButton_19, 2, 3, 1, 1);

        radioButton_21 = new QRadioButton(gridLayoutWidget);
        radioButton_21->setObjectName(QStringLiteral("radioButton_21"));

        gridLayout->addWidget(radioButton_21, 4, 1, 1, 1);

        radioButton_18 = new QRadioButton(gridLayoutWidget);
        radioButton_18->setObjectName(QStringLiteral("radioButton_18"));

        gridLayout->addWidget(radioButton_18, 4, 2, 1, 1);

        radioButton_6 = new QRadioButton(gridLayoutWidget);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        gridLayout->addWidget(radioButton_6, 1, 1, 1, 1);

        radioButton_10 = new QRadioButton(gridLayoutWidget);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));

        gridLayout->addWidget(radioButton_10, 2, 2, 1, 1);

        radioButton_13 = new QRadioButton(gridLayoutWidget);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));

        gridLayout->addWidget(radioButton_13, 3, 0, 1, 1);

        radioButton_16 = new QRadioButton(gridLayoutWidget);
        radioButton_16->setObjectName(QStringLiteral("radioButton_16"));

        gridLayout->addWidget(radioButton_16, 3, 2, 1, 1);

        radioButton_14 = new QRadioButton(gridLayoutWidget);
        radioButton_14->setObjectName(QStringLiteral("radioButton_14"));

        gridLayout->addWidget(radioButton_14, 3, 1, 1, 1);

        radioButton_17 = new QRadioButton(gridLayoutWidget);
        radioButton_17->setObjectName(QStringLiteral("radioButton_17"));

        gridLayout->addWidget(radioButton_17, 4, 0, 1, 1);

        radioButton_3 = new QRadioButton(gridLayoutWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 0, 1, 1, 1);

        radioButton_7 = new QRadioButton(gridLayoutWidget);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        gridLayout->addWidget(radioButton_7, 1, 2, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 2, 0, 1, 1);

        radioButton_4 = new QRadioButton(gridLayoutWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 0, 0, 1, 1);

        radioButton = new QRadioButton(gridLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout->addWidget(radioButton, 1, 0, 1, 1);

        radioButton_8 = new QRadioButton(gridLayoutWidget);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        gridLayout->addWidget(radioButton_8, 0, 2, 1, 1);

        radioButton_23 = new QRadioButton(gridLayoutWidget);
        radioButton_23->setObjectName(QStringLiteral("radioButton_23"));

        gridLayout->addWidget(radioButton_23, 4, 3, 1, 1);

        radioButton_5 = new QRadioButton(gridLayoutWidget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        gridLayout->addWidget(radioButton_5, 2, 1, 1, 1);

        radioButton_22 = new QRadioButton(gridLayoutWidget);
        radioButton_22->setObjectName(QStringLiteral("radioButton_22"));

        gridLayout->addWidget(radioButton_22, 3, 3, 1, 1);

        radioButton_24 = new QRadioButton(gridLayoutWidget);
        radioButton_24->setObjectName(QStringLiteral("radioButton_24"));

        gridLayout->addWidget(radioButton_24, 1, 3, 1, 1);

        radioButton_26 = new QRadioButton(gridLayoutWidget);
        radioButton_26->setObjectName(QStringLiteral("radioButton_26"));

        gridLayout->addWidget(radioButton_26, 2, 4, 1, 1);

        radioButton_25 = new QRadioButton(gridLayoutWidget);
        radioButton_25->setObjectName(QStringLiteral("radioButton_25"));

        gridLayout->addWidget(radioButton_25, 0, 3, 1, 1);

        radioButton_27 = new QRadioButton(gridLayoutWidget);
        radioButton_27->setObjectName(QStringLiteral("radioButton_27"));

        gridLayout->addWidget(radioButton_27, 4, 4, 1, 1);

        radioButton_28 = new QRadioButton(gridLayoutWidget);
        radioButton_28->setObjectName(QStringLiteral("radioButton_28"));

        gridLayout->addWidget(radioButton_28, 3, 4, 1, 1);

        radioButton_30 = new QRadioButton(gridLayoutWidget);
        radioButton_30->setObjectName(QStringLiteral("radioButton_30"));

        gridLayout->addWidget(radioButton_30, 0, 4, 1, 1);

        radioButton_29 = new QRadioButton(gridLayoutWidget);
        radioButton_29->setObjectName(QStringLiteral("radioButton_29"));

        gridLayout->addWidget(radioButton_29, 1, 4, 1, 1);

        stackedWidget = new QStackedWidget(teacherpaper);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(260, 30, 451, 421));
        QFont font2;
        font2.setPointSize(18);
        stackedWidget->setFont(font2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        textEdit = new QTextEdit(page_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 0, 391, 151));
        textEdit_2 = new QTextEdit(page_3);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(60, 150, 391, 51));
        textEdit_3 = new QTextEdit(page_3);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(60, 200, 391, 51));
        textEdit_4 = new QTextEdit(page_3);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(60, 250, 391, 51));
        textEdit_5 = new QTextEdit(page_3);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(60, 300, 391, 51));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 51, 51));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 110, 61, 41));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 150, 21, 21));
        label_5->setFont(font2);
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 200, 21, 21));
        label_6->setFont(font2);
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 300, 21, 21));
        label_7->setFont(font2);
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 250, 21, 21));
        label_8->setFont(font2);
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 30, 51, 31));
        QFont font3;
        font3.setPointSize(12);
        label_9->setFont(font3);
        textEdit_6 = new QTextEdit(page_3);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(60, 380, 61, 41));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 360, 71, 21));
        QFont font4;
        font4.setPointSize(14);
        label_10->setFont(font4);
        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_13 = new QLabel(page_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 10, 61, 31));
        textEdit_9 = new QTextEdit(page_5);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setGeometry(QRect(70, 0, 371, 241));
        label_14 = new QLabel(page_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(0, 220, 61, 31));
        label_14->setFont(font4);
        textEdit_10 = new QTextEdit(page_5);
        textEdit_10->setObjectName(QStringLiteral("textEdit_10"));
        textEdit_10->setGeometry(QRect(70, 240, 371, 161));
        stackedWidget->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        textEdit_7 = new QTextEdit(page_4);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setGeometry(QRect(70, 0, 371, 241));
        label_11 = new QLabel(page_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 0, 71, 41));
        label_11->setFont(font2);
        textEdit_8 = new QTextEdit(page_4);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setGeometry(QRect(70, 240, 371, 161));
        label_12 = new QLabel(page_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 220, 71, 31));
        label_12->setFont(font4);
        stackedWidget->addWidget(page_4);

        retranslateUi(teacherpaper);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(teacherpaper);
    } // setupUi

    void retranslateUi(QWidget *teacherpaper)
    {
        teacherpaper->setWindowTitle(QApplication::translate("teacherpaper", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("teacherpaper", "\345\234\250\347\272\277\350\200\203\350\257\225\345\271\263\345\217\260\357\274\210\346\225\231\345\270\210\347\253\257\357\274\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("teacherpaper", "<html><head/><body><p><span style=\" font-size:20pt;\">\347\273\204\345\215\267</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("teacherpaper", "\346\234\237\344\270\255\350\257\225\345\215\267", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("teacherpaper", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("teacherpaper", "\345\217\221\345\270\203", Q_NULLPTR));
        radioButton_19->setText(QString());
        radioButton_21->setText(QString());
        radioButton_18->setText(QString());
        radioButton_6->setText(QString());
        radioButton_10->setText(QString());
        radioButton_13->setText(QString());
        radioButton_16->setText(QString());
        radioButton_14->setText(QString());
        radioButton_17->setText(QString());
        radioButton_3->setText(QString());
        radioButton_7->setText(QString());
        radioButton_2->setText(QString());
        radioButton_4->setText(QString());
        radioButton->setText(QString());
        radioButton_8->setText(QString());
        radioButton_23->setText(QString());
        radioButton_5->setText(QString());
        radioButton_22->setText(QString());
        radioButton_24->setText(QString());
        radioButton_26->setText(QString());
        radioButton_25->setText(QString());
        radioButton_27->setText(QString());
        radioButton_28->setText(QString());
        radioButton_30->setText(QString());
        radioButton_29->setText(QString());
        label_3->setText(QApplication::translate("teacherpaper", "\351\242\230\347\233\256", Q_NULLPTR));
        label_4->setText(QApplication::translate("teacherpaper", "\351\200\211\351\241\271", Q_NULLPTR));
        label_5->setText(QApplication::translate("teacherpaper", "A.", Q_NULLPTR));
        label_6->setText(QApplication::translate("teacherpaper", "B.", Q_NULLPTR));
        label_7->setText(QApplication::translate("teacherpaper", "D.", Q_NULLPTR));
        label_8->setText(QApplication::translate("teacherpaper", "C.", Q_NULLPTR));
        label_9->setText(QApplication::translate("teacherpaper", "\351\200\211\346\213\251\351\242\230", Q_NULLPTR));
        label_10->setText(QApplication::translate("teacherpaper", "\345\217\202\350\200\203\347\255\224\346\241\210\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("teacherpaper", "\351\242\230\347\233\256", Q_NULLPTR));
        label_14->setText(QApplication::translate("teacherpaper", "\345\217\202\350\200\203\347\255\224\346\241\210", Q_NULLPTR));
        label_11->setText(QApplication::translate("teacherpaper", "\351\242\230\347\233\256", Q_NULLPTR));
        label_12->setText(QApplication::translate("teacherpaper", "\345\217\202\350\200\203\347\255\224\346\241\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teacherpaper: public Ui_teacherpaper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERPAPER_H
