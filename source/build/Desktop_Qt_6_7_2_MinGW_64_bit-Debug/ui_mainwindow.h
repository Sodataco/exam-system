/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *EditAccount;
    QLineEdit *EditPassword;
    QPushButton *loginButton;
    QGroupBox *groupBox;
    QPushButton *student;
    QPushButton *teacher;
    QPushButton *Administrators;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCommandLinkButton *commandLinkButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setPointSize(20);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        EditAccount = new QLineEdit(centralwidget);
        EditAccount->setObjectName("EditAccount");
        EditAccount->setGeometry(QRect(140, 150, 271, 31));
        EditAccount->setFont(font);
        EditPassword = new QLineEdit(centralwidget);
        EditPassword->setObjectName("EditPassword");
        EditPassword->setGeometry(QRect(140, 190, 271, 31));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(180, 260, 201, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(160, 70, 241, 81));
        groupBox->setCheckable(false);
        student = new QPushButton(groupBox);
        student->setObjectName("student");
        student->setGeometry(QRect(30, 30, 61, 31));
        QFont font1;
        font1.setPointSize(16);
        student->setFont(font1);
        student->setCheckable(true);
        student->setAutoExclusive(true);
        teacher = new QPushButton(groupBox);
        teacher->setObjectName("teacher");
        teacher->setGeometry(QRect(90, 30, 61, 31));
        teacher->setFont(font1);
        teacher->setCheckable(true);
        teacher->setAutoExclusive(true);
        Administrators = new QPushButton(groupBox);
        Administrators->setObjectName("Administrators");
        Administrators->setGeometry(QRect(150, 30, 71, 31));
        Administrators->setFont(font1);
        Administrators->setCheckable(true);
        Administrators->setAutoExclusive(true);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(150, 230, 81, 16));
        QFont font2;
        font2.setPointSize(9);
        checkBox->setFont(font2);
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(240, 230, 91, 18));
        checkBox_2->setFont(font2);
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(320, 220, 91, 31));
        QFont font3;
        font3.setPointSize(8);
        commandLinkButton->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 31));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        groupBox->setTitle(QString());
        student->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237", nullptr));
        teacher->setText(QCoreApplication::translate("MainWindow", "\346\225\231\345\270\210", nullptr));
        Administrators->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
