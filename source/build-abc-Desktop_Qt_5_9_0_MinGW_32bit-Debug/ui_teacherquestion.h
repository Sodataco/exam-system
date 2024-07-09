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
#include <QtWidgets/QCheckBox>
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
    QTextEdit *inputsQ;
    QTextEdit *inputA;
    QTextEdit *inputB;
    QTextEdit *inputC;
    QTextEdit *inputD;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *importSelectquestion;
    QCheckBox *selectA;
    QCheckBox *selectB;
    QCheckBox *selectC;
    QCheckBox *selectD;
    QWidget *page_5;
    QLabel *label_13;
    QTextEdit *textEdit_9;
    QLabel *label_14;
    QTextEdit *textEdit_10;
    QStackedWidget *stackedWidget_2;
    QWidget *page_6;
    QTextEdit *textEdit_11;
    QTextEdit *textEdit_12;
    QTextEdit *textEdit_13;
    QTextEdit *textEdit_14;
    QTextEdit *textEdit_15;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QTextEdit *textEdit_16;
    QLabel *label_22;
    QWidget *page_7;
    QLabel *label_24;
    QTextEdit *textEdit_18;
    QPushButton *importBlankquestion;
    QWidget *page_8;
    QTextEdit *textEdit_19;
    QLabel *label_25;
    QTextEdit *textEdit_20;
    QLabel *label_26;
    QLabel *label_23;
    QWidget *page_4;
    QTextEdit *textEdit_7;
    QLabel *label_11;
    QTextEdit *textEdit_8;
    QLabel *label_12;
    QPushButton *importAnswerquestion;
    QLabel *label_27;

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
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label_2 = new QLabel(teacherquestion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 121, 31));
        label_2->setFont(font1);
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
        stackedWidget->setGeometry(QRect(270, 20, 451, 471));
        stackedWidget->setFont(font1);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        inputsQ = new QTextEdit(page_3);
        inputsQ->setObjectName(QStringLiteral("inputsQ"));
        inputsQ->setGeometry(QRect(60, 0, 391, 151));
        inputA = new QTextEdit(page_3);
        inputA->setObjectName(QStringLiteral("inputA"));
        inputA->setGeometry(QRect(60, 150, 391, 51));
        inputB = new QTextEdit(page_3);
        inputB->setObjectName(QStringLiteral("inputB"));
        inputB->setGeometry(QRect(60, 200, 391, 51));
        inputC = new QTextEdit(page_3);
        inputC->setObjectName(QStringLiteral("inputC"));
        inputC->setGeometry(QRect(60, 250, 391, 51));
        inputD = new QTextEdit(page_3);
        inputD->setObjectName(QStringLiteral("inputD"));
        inputD->setGeometry(QRect(60, 300, 391, 51));
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
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 360, 71, 21));
        QFont font3;
        font3.setPointSize(14);
        label_10->setFont(font3);
        importSelectquestion = new QPushButton(page_3);
        importSelectquestion->setObjectName(QStringLiteral("importSelectquestion"));
        importSelectquestion->setGeometry(QRect(360, 440, 91, 31));
        importSelectquestion->setFont(font3);
        selectA = new QCheckBox(page_3);
        selectA->setObjectName(QStringLiteral("selectA"));
        selectA->setGeometry(QRect(70, 400, 61, 18));
        selectB = new QCheckBox(page_3);
        selectB->setObjectName(QStringLiteral("selectB"));
        selectB->setGeometry(QRect(120, 400, 61, 18));
        selectC = new QCheckBox(page_3);
        selectC->setObjectName(QStringLiteral("selectC"));
        selectC->setGeometry(QRect(170, 400, 61, 18));
        selectD = new QCheckBox(page_3);
        selectD->setObjectName(QStringLiteral("selectD"));
        selectD->setGeometry(QRect(220, 400, 61, 18));
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
        stackedWidget_2 = new QStackedWidget(page_5);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(50, 400, 451, 421));
        stackedWidget_2->setFont(font1);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        textEdit_11 = new QTextEdit(page_6);
        textEdit_11->setObjectName(QStringLiteral("textEdit_11"));
        textEdit_11->setGeometry(QRect(60, 0, 391, 151));
        textEdit_12 = new QTextEdit(page_6);
        textEdit_12->setObjectName(QStringLiteral("textEdit_12"));
        textEdit_12->setGeometry(QRect(60, 150, 391, 51));
        textEdit_13 = new QTextEdit(page_6);
        textEdit_13->setObjectName(QStringLiteral("textEdit_13"));
        textEdit_13->setGeometry(QRect(60, 200, 391, 51));
        textEdit_14 = new QTextEdit(page_6);
        textEdit_14->setObjectName(QStringLiteral("textEdit_14"));
        textEdit_14->setGeometry(QRect(60, 250, 391, 51));
        textEdit_15 = new QTextEdit(page_6);
        textEdit_15->setObjectName(QStringLiteral("textEdit_15"));
        textEdit_15->setGeometry(QRect(60, 300, 391, 51));
        label_15 = new QLabel(page_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(0, 0, 51, 51));
        label_16 = new QLabel(page_6);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(0, 110, 61, 41));
        label_17 = new QLabel(page_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 150, 21, 21));
        label_17->setFont(font1);
        label_18 = new QLabel(page_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(40, 200, 21, 21));
        label_18->setFont(font1);
        label_19 = new QLabel(page_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(40, 300, 21, 21));
        label_19->setFont(font1);
        label_20 = new QLabel(page_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(40, 250, 21, 21));
        label_20->setFont(font1);
        label_21 = new QLabel(page_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(0, 30, 51, 31));
        label_21->setFont(font2);
        textEdit_16 = new QTextEdit(page_6);
        textEdit_16->setObjectName(QStringLiteral("textEdit_16"));
        textEdit_16->setGeometry(QRect(60, 380, 61, 41));
        label_22 = new QLabel(page_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 360, 71, 21));
        label_22->setFont(font3);
        stackedWidget_2->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_24 = new QLabel(page_7);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(0, 220, 61, 31));
        label_24->setFont(font3);
        textEdit_18 = new QTextEdit(page_7);
        textEdit_18->setObjectName(QStringLiteral("textEdit_18"));
        textEdit_18->setGeometry(QRect(70, 240, 371, 161));
        importBlankquestion = new QPushButton(page_7);
        importBlankquestion->setObjectName(QStringLiteral("importBlankquestion"));
        importBlankquestion->setGeometry(QRect(310, 40, 91, 31));
        importBlankquestion->setFont(font3);
        stackedWidget_2->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        textEdit_19 = new QTextEdit(page_8);
        textEdit_19->setObjectName(QStringLiteral("textEdit_19"));
        textEdit_19->setGeometry(QRect(70, 0, 371, 241));
        label_25 = new QLabel(page_8);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 0, 71, 41));
        label_25->setFont(font1);
        textEdit_20 = new QTextEdit(page_8);
        textEdit_20->setObjectName(QStringLiteral("textEdit_20"));
        textEdit_20->setGeometry(QRect(70, 240, 371, 161));
        label_26 = new QLabel(page_8);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(0, 220, 71, 31));
        label_26->setFont(font3);
        stackedWidget_2->addWidget(page_8);
        label_23 = new QLabel(page_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 40, 51, 31));
        label_23->setFont(font3);
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
        importAnswerquestion = new QPushButton(page_4);
        importAnswerquestion->setObjectName(QStringLiteral("importAnswerquestion"));
        importAnswerquestion->setGeometry(QRect(360, 440, 91, 31));
        importAnswerquestion->setFont(font3);
        label_27 = new QLabel(page_4);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 30, 61, 31));
        label_27->setFont(font3);
        stackedWidget->addWidget(page_4);

        retranslateUi(teacherquestion);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(1);


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
        importSelectquestion->setText(QApplication::translate("teacherquestion", "\345\256\214\346\210\220\345\271\266\345\257\274\345\205\245", Q_NULLPTR));
        selectA->setText(QApplication::translate("teacherquestion", "A", Q_NULLPTR));
        selectB->setText(QApplication::translate("teacherquestion", "B", Q_NULLPTR));
        selectC->setText(QApplication::translate("teacherquestion", "C", Q_NULLPTR));
        selectD->setText(QApplication::translate("teacherquestion", "D", Q_NULLPTR));
        label_13->setText(QApplication::translate("teacherquestion", "\351\242\230\347\233\256", Q_NULLPTR));
        label_14->setText(QApplication::translate("teacherquestion", "\345\217\202\350\200\203\347\255\224\346\241\210", Q_NULLPTR));
        label_15->setText(QApplication::translate("teacherquestion", "\351\242\230\347\233\256", Q_NULLPTR));
        label_16->setText(QApplication::translate("teacherquestion", "\351\200\211\351\241\271", Q_NULLPTR));
        label_17->setText(QApplication::translate("teacherquestion", "A.", Q_NULLPTR));
        label_18->setText(QApplication::translate("teacherquestion", "B.", Q_NULLPTR));
        label_19->setText(QApplication::translate("teacherquestion", "D.", Q_NULLPTR));
        label_20->setText(QApplication::translate("teacherquestion", "C.", Q_NULLPTR));
        label_21->setText(QApplication::translate("teacherquestion", "\351\200\211\346\213\251\351\242\230", Q_NULLPTR));
        label_22->setText(QApplication::translate("teacherquestion", "\345\217\202\350\200\203\347\255\224\346\241\210\357\274\232", Q_NULLPTR));
        label_24->setText(QApplication::translate("teacherquestion", "\345\217\202\350\200\203\347\255\224\346\241\210", Q_NULLPTR));
        importBlankquestion->setText(QApplication::translate("teacherquestion", "\345\256\214\346\210\220\345\271\266\345\257\274\345\205\245", Q_NULLPTR));
        label_25->setText(QApplication::translate("teacherquestion", "\351\242\230\347\233\256", Q_NULLPTR));
        label_26->setText(QApplication::translate("teacherquestion", "\345\217\202\350\200\203\347\255\224\346\241\210", Q_NULLPTR));
        label_23->setText(QApplication::translate("teacherquestion", "\345\241\253\347\251\272\351\242\230", Q_NULLPTR));
        label_11->setText(QApplication::translate("teacherquestion", "\351\242\230\347\233\256", Q_NULLPTR));
        label_12->setText(QApplication::translate("teacherquestion", "\345\217\202\350\200\203\347\255\224\346\241\210", Q_NULLPTR));
        importAnswerquestion->setText(QApplication::translate("teacherquestion", "\345\256\214\346\210\220\345\271\266\345\257\274\345\205\245", Q_NULLPTR));
        label_27->setText(QApplication::translate("teacherquestion", "\351\227\256\347\255\224\351\242\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teacherquestion: public Ui_teacherquestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERQUESTION_H
