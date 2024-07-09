/********************************************************************************
** Form generated from reading UI file 'studentpreexam.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPREEXAM_H
#define UI_STUDENTPREEXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentpreexam
{
public:
    QPushButton *exam;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *Return;
    QListView *listView;

    void setupUi(QWidget *studentpreexam)
    {
        if (studentpreexam->objectName().isEmpty())
            studentpreexam->setObjectName(QStringLiteral("studentpreexam"));
        studentpreexam->resize(673, 391);
        QFont font;
        font.setPointSize(12);
        studentpreexam->setFont(font);
        exam = new QPushButton(studentpreexam);
        exam->setObjectName(QStringLiteral("exam"));
        exam->setGeometry(QRect(120, 80, 371, 31));
        exam->setFont(font);
        pushButton_2 = new QPushButton(studentpreexam);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 110, 371, 31));
        pushButton_3 = new QPushButton(studentpreexam);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 140, 371, 31));
        label = new QLabel(studentpreexam);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 30, 101, 31));
        Return = new QPushButton(studentpreexam);
        Return->setObjectName(QStringLiteral("Return"));
        Return->setGeometry(QRect(570, 347, 80, 31));
        listView = new QListView(studentpreexam);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(160, 180, 256, 192));

        retranslateUi(studentpreexam);

        QMetaObject::connectSlotsByName(studentpreexam);
    } // setupUi

    void retranslateUi(QWidget *studentpreexam)
    {
        studentpreexam->setWindowTitle(QApplication::translate("studentpreexam", "Form", Q_NULLPTR));
        exam->setText(QApplication::translate("studentpreexam", "\346\225\260\346\215\256\347\273\223\346\236\204 \350\267\235\347\246\273\345\274\200\345\247\213\350\277\230\346\234\211x\345\244\251x\345\260\217\346\227\266x\345\210\206\351\222\237", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("studentpreexam", "\345\244\247\345\255\246\347\211\251\347\220\206  \350\200\203\350\257\225\344\270\255", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("studentpreexam", "\347\272\277\346\200\247\344\273\243\346\225\260  \345\267\262\347\273\223\346\235\237", Q_NULLPTR));
        label->setText(QApplication::translate("studentpreexam", "\347\202\271\345\207\273\345\217\202\344\270\216\350\200\203\350\257\225", Q_NULLPTR));
        Return->setText(QApplication::translate("studentpreexam", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studentpreexam: public Ui_studentpreexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPREEXAM_H
