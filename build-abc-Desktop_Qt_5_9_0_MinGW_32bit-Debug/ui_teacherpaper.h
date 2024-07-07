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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
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

    void setupUi(QWidget *teacherpaper)
    {
        if (teacherpaper->objectName().isEmpty())
            teacherpaper->setObjectName(QStringLiteral("teacherpaper"));
        teacherpaper->resize(729, 528);
        label = new QLabel(teacherpaper);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 291, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(teacherpaper);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 121, 61));
        scrollArea = new QScrollArea(teacherpaper);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 100, 251, 381));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 249, 379));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(231, 0, 20, 381));
        verticalScrollBar->setOrientation(Qt::Vertical);
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 231, 381));
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
        pushButton_2->setGeometry(QRect(0, 480, 251, 29));
        pushButton_2->setFont(font1);

        retranslateUi(teacherpaper);

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
    } // retranslateUi

};

namespace Ui {
    class teacherpaper: public Ui_teacherpaper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERPAPER_H
