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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
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
    QPushButton *questionSelect;
    QPushButton *questionBlank;
    QPushButton *questionAnswer;
    QPushButton *pushButton_4;
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
    QPushButton *importquestion;

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
        label_2->setGeometry(QRect(10, 50, 121, 31));
        verticalLayoutWidget = new QWidget(teacherquestion);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 110, 111, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        questionSelect = new QPushButton(verticalLayoutWidget);
        questionSelect->setObjectName(QStringLiteral("questionSelect"));

        verticalLayout->addWidget(questionSelect);

        questionBlank = new QPushButton(verticalLayoutWidget);
        questionBlank->setObjectName(QStringLiteral("questionBlank"));

        verticalLayout->addWidget(questionBlank);

        questionAnswer = new QPushButton(verticalLayoutWidget);
        questionAnswer->setObjectName(QStringLiteral("questionAnswer"));

        verticalLayout->addWidget(questionAnswer);

        pushButton_4 = new QPushButton(teacherquestion);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(70, 460, 81, 31));
        stackedWidget = new QStackedWidget(teacherquestion);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(270, 20, 451, 421));
        QFont font1;
        font1.setPointSize(18);
        stackedWidget->setFont(font1);
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
        label_5->setFont(font1);
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 200, 21, 21));
        label_6->setFont(font1);
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 300, 21, 21));
        label_7->setFont(font1);
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 250, 21, 21));
        label_8->setFont(font1);
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 30, 51, 31));
        QFont font2;
        font2.setPointSize(12);
        label_9->setFont(font2);
        textEdit_6 = new QTextEdit(page_3);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(60, 380, 61, 41));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 360, 71, 21));
        QFont font3;
        font3.setPointSize(14);
        label_10->setFont(font3);
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
        label_14->setFont(font3);
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
        label_11->setFont(font1);
        textEdit_8 = new QTextEdit(page_4);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setGeometry(QRect(70, 240, 371, 161));
        label_12 = new QLabel(page_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 220, 71, 31));
        label_12->setFont(font3);
        stackedWidget->addWidget(page_4);
        importquestion = new QPushButton(teacherquestion);
        importquestion->setObjectName(QStringLiteral("importquestion"));
        importquestion->setGeometry(QRect(620, 450, 91, 31));
        importquestion->setFont(font3);

        retranslateUi(teacherquestion);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(teacherquestion);
    } // setupUi

    void retranslateUi(QWidget *teacherquestion)
    {
        teacherquestion->setWindowTitle(QApplication::translate("teacherquestion", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("teacherquestion", "\345\234\250\347\272\277\350\200\203\350\257\225\345\271\263\345\217\260\357\274\210\346\225\231\345\270\210\347\253\257\357\274\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("teacherquestion", "<html><head/><body><p><span style=\" font-size:20pt;\">\351\242\230\345\272\223</span></p></body></html>", Q_NULLPTR));
        questionSelect->setText(QApplication::translate("teacherquestion", "\351\200\211\346\213\251\351\242\230", Q_NULLPTR));
        questionBlank->setText(QApplication::translate("teacherquestion", "\345\241\253\347\251\272\351\242\230", Q_NULLPTR));
        questionAnswer->setText(QApplication::translate("teacherquestion", "\347\256\200\347\255\224\351\242\230", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("teacherquestion", "\351\200\200\345\207\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("teacherquestion", "\351\242\230\347\233\256", Q_NULLPTR));
        label_4->setText(QApplication::translate("teacherquestion", "\351\200\211\351\241\271", Q_NULLPTR));
        label_5->setText(QApplication::translate("teacherquestion", "A.", Q_NULLPTR));
        label_6->setText(QApplication::translate("teacherquestion", "B.", Q_NULLPTR));
        label_7->setText(QApplication::translate("teacherquestion", "D.", Q_NULLPTR));
        label_8->setText(QApplication::translate("teacherquestion", "C.", Q_NULLPTR));
        label_9->setText(QApplication::translate("teacherquestion", "\351\200\211\346\213\251\351\242\230", Q_NULLPTR));
        label_10->setText(QApplication::translate("teacherquestion", "\345\217\202\350\200\203\347\255\224\346\241\210\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("teacherquestion", "\351\242\230\347\233\256", Q_NULLPTR));
        label_14->setText(QApplication::translate("teacherquestion", "\345\217\202\350\200\203\347\255\224\346\241\210", Q_NULLPTR));
        label_11->setText(QApplication::translate("teacherquestion", "\351\242\230\347\233\256", Q_NULLPTR));
        label_12->setText(QApplication::translate("teacherquestion", "\345\217\202\350\200\203\347\255\224\346\241\210", Q_NULLPTR));
        importquestion->setText(QApplication::translate("teacherquestion", "\345\256\214\346\210\220\345\271\266\345\257\274\345\205\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teacherquestion: public Ui_teacherquestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERQUESTION_H
