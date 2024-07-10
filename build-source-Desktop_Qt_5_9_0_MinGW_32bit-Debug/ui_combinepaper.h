/********************************************************************************
** Form generated from reading UI file 'combinepaper.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBINEPAPER_H
#define UI_COMBINEPAPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_combinePaper
{
public:
    QLabel *label;
    QLabel *label_2;
    QListWidget *questionList;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTimeEdit *timeEdit;
    QCheckBox *stickanswer;
    QLabel *label_8;
    QCheckBox *disorder;
    QLabel *label_7;
    QCheckBox *updateimage;
    QPushButton *finish;
    QPushButton *Return;
    QPushButton *Refresh;
    QTextEdit *title;

    void setupUi(QWidget *combinePaper)
    {
        if (combinePaper->objectName().isEmpty())
            combinePaper->setObjectName(QStringLiteral("combinePaper"));
        combinePaper->resize(689, 457);
        QFont font;
        font.setPointSize(14);
        combinePaper->setFont(font);
        label = new QLabel(combinePaper);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 51, 21));
        label_2 = new QLabel(combinePaper);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 240, 81, 41));
        questionList = new QListWidget(combinePaper);
        questionList->setObjectName(QStringLiteral("questionList"));
        questionList->setGeometry(QRect(70, 70, 451, 161));
        questionList->setUniformItemSizes(false);
        label_3 = new QLabel(combinePaper);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 30, 101, 31));
        dateTimeEdit = new QDateTimeEdit(combinePaper);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(240, 270, 194, 22));
        label_4 = new QLabel(combinePaper);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 270, 81, 21));
        label_5 = new QLabel(combinePaper);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 300, 131, 21));
        label_6 = new QLabel(combinePaper);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 330, 151, 21));
        timeEdit = new QTimeEdit(combinePaper);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(240, 300, 111, 21));
        stickanswer = new QCheckBox(combinePaper);
        stickanswer->setObjectName(QStringLiteral("stickanswer"));
        stickanswer->setGeometry(QRect(240, 330, 151, 20));
        label_8 = new QLabel(combinePaper);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 360, 81, 21));
        disorder = new QCheckBox(combinePaper);
        disorder->setObjectName(QStringLiteral("disorder"));
        disorder->setGeometry(QRect(240, 360, 151, 20));
        label_7 = new QLabel(combinePaper);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 390, 121, 21));
        updateimage = new QCheckBox(combinePaper);
        updateimage->setObjectName(QStringLiteral("updateimage"));
        updateimage->setGeometry(QRect(240, 390, 151, 20));
        finish = new QPushButton(combinePaper);
        finish->setObjectName(QStringLiteral("finish"));
        finish->setGeometry(QRect(590, 420, 91, 31));
        Return = new QPushButton(combinePaper);
        Return->setObjectName(QStringLiteral("Return"));
        Return->setGeometry(QRect(480, 420, 91, 31));
        Refresh = new QPushButton(combinePaper);
        Refresh->setObjectName(QStringLiteral("Refresh"));
        Refresh->setGeometry(QRect(160, 37, 71, 31));
        title = new QTextEdit(combinePaper);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(310, 30, 211, 31));
        QFont font1;
        font1.setPointSize(10);
        title->setFont(font1);

        retranslateUi(combinePaper);

        QMetaObject::connectSlotsByName(combinePaper);
    } // setupUi

    void retranslateUi(QWidget *combinePaper)
    {
        combinePaper->setWindowTitle(QApplication::translate("combinePaper", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("combinePaper", "\347\273\204\345\215\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("combinePaper", "\345\205\263\344\272\216\346\235\203\351\231\220\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("combinePaper", "\350\257\267\351\200\211\346\213\251\351\242\230\347\233\256", Q_NULLPTR));
        label_4->setText(QApplication::translate("combinePaper", "\345\217\221\345\270\203\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("combinePaper", "\350\200\203\350\257\225\346\227\266\351\225\277(\346\227\266:\345\210\206)", Q_NULLPTR));
        label_6->setText(QApplication::translate("combinePaper", "\345\205\201\350\256\270\345\255\246\347\224\237\347\262\230\350\264\264\347\255\224\346\241\210", Q_NULLPTR));
        stickanswer->setText(QApplication::translate("combinePaper", "(\345\213\276\351\200\211\345\215\263\344\270\272\345\220\214\346\204\217)", Q_NULLPTR));
        label_8->setText(QApplication::translate("combinePaper", "\351\242\230\347\233\256\344\271\261\345\272\217", Q_NULLPTR));
        disorder->setText(QApplication::translate("combinePaper", "(\345\213\276\351\200\211\345\215\263\344\270\272\345\220\214\346\204\217)", Q_NULLPTR));
        label_7->setText(QApplication::translate("combinePaper", "\345\205\201\350\256\270\344\270\212\344\274\240\351\231\204\344\273\266", Q_NULLPTR));
        updateimage->setText(QApplication::translate("combinePaper", "(\345\213\276\351\200\211\345\215\263\344\270\272\345\220\214\346\204\217)", Q_NULLPTR));
        finish->setText(QApplication::translate("combinePaper", "\345\256\214\346\210\220", Q_NULLPTR));
        Return->setText(QApplication::translate("combinePaper", "\345\217\226\346\266\210", Q_NULLPTR));
        Refresh->setText(QApplication::translate("combinePaper", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class combinePaper: public Ui_combinePaper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBINEPAPER_H
