/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
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
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCommandLinkButton *commandLinkButton;
    QPushButton *eye;
    QPushButton *zuixiaohua;
    QPushButton *student;
    QPushButton *teacher;
    QPushButton *Administrators;
    QLabel *label;
    QLabel *top;
    QPushButton *tuichu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(380, 431);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color:rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        EditAccount = new QLineEdit(centralwidget);
        EditAccount->setObjectName(QStringLiteral("EditAccount"));
        EditAccount->setGeometry(QRect(60, 250, 271, 31));
        QFont font1;
        font1.setPointSize(20);
        EditAccount->setFont(font1);
        EditAccount->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:none;\n"
"border-bottom:1px solid rgb(51, 102, 153);\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"background-color:rgb(232, 232, 232);\n"
"}\n"
""));
        EditPassword = new QLineEdit(centralwidget);
        EditPassword->setObjectName(QStringLiteral("EditPassword"));
        EditPassword->setGeometry(QRect(60, 290, 271, 31));
        EditPassword->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border:none;\n"
"border-bottom:1px solid rgb(51, 102, 153);\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"background-color:rgb(232, 232, 232);\n"
"}"));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(90, 370, 201, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font2.setPointSize(20);
        loginButton->setFont(font2);
        loginButton->setStyleSheet(QLatin1String("QPushButton#loginButton\n"
"{\n"
"background-color:rgb(51, 102, 153);\n"
"border-radius:5px;\n"
"color:white;\n"
"}\n"
"QPushButton#loginButton:hover\n"
"{\n"
"background-color:rgb(255, 255, 255);\n"
"color:rgb(51, 102, 153);\n"
"}"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(70, 330, 91, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font3.setPointSize(10);
        checkBox->setFont(font3);
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(160, 330, 101, 21));
        checkBox_2->setFont(font3);
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(250, 320, 91, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(10);
        commandLinkButton->setFont(font4);
        commandLinkButton->setStyleSheet(QLatin1String("QCommandLinkButton\n"
"{\n"
"color:rgb(0, 0, 0);\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/forgetpassword.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);
        eye = new QPushButton(centralwidget);
        eye->setObjectName(QStringLiteral("eye"));
        eye->setGeometry(QRect(320, 300, 16, 16));
        eye->setCheckable(true);
        zuixiaohua = new QPushButton(centralwidget);
        zuixiaohua->setObjectName(QStringLiteral("zuixiaohua"));
        zuixiaohua->setGeometry(QRect(320, 0, 31, 31));
        zuixiaohua->setStyleSheet(QLatin1String("QPushButton#zuixiaohua\n"
"{\n"
"border:one;\n"
"}\n"
"QPushButton#zuixiaohua\n"
"{\n"
"image:url(:/image/zuixioahua.png);\n"
"}\n"
"QPushButton#zuixiaohua:hover\n"
"{\n"
"background-color:rgb(51, 102, 153);\n"
"}\n"
"QPushButton#zuixiaohua\n"
"{\n"
"background-color:transparent;\n"
"}\n"
"\n"
""));
        student = new QPushButton(centralwidget);
        student->setObjectName(QStringLiteral("student"));
        student->setGeometry(QRect(90, 210, 61, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font5.setPointSize(14);
        student->setFont(font5);
        student->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(51, 102, 153);\n"
"color:rgb(255, 255, 255);\n"
"}"));
        student->setCheckable(true);
        student->setAutoExclusive(true);
        teacher = new QPushButton(centralwidget);
        teacher->setObjectName(QStringLiteral("teacher"));
        teacher->setGeometry(QRect(160, 210, 61, 31));
        teacher->setFont(font5);
        teacher->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(51, 102, 153);\n"
"color:rgb(255, 255, 255);\n"
"}"));
        teacher->setCheckable(true);
        teacher->setAutoExclusive(true);
        Administrators = new QPushButton(centralwidget);
        Administrators->setObjectName(QStringLiteral("Administrators"));
        Administrators->setGeometry(QRect(230, 210, 71, 31));
        Administrators->setFont(font5);
        Administrators->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(51, 102, 153);\n"
"color:rgb(255, 255, 255);\n"
"}"));
        Administrators->setCheckable(true);
        Administrators->setAutoExclusive(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 120, 81, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/photo.png")));
        label->setScaledContents(true);
        top = new QLabel(centralwidget);
        top->setObjectName(QStringLiteral("top"));
        top->setGeometry(QRect(-10, -10, 391, 181));
        top->setPixmap(QPixmap(QString::fromUtf8(":/image/background.gif")));
        tuichu = new QPushButton(centralwidget);
        tuichu->setObjectName(QStringLiteral("tuichu"));
        tuichu->setGeometry(QRect(350, 0, 31, 31));
        tuichu->setStyleSheet(QLatin1String("QPushButton#tuichu\n"
"{\n"
"border:one;\n"
"}\n"
"QPushButton#tuichu\n"
"{\n"
"image:url(:/image/tuichu.png);\n"
"}\n"
"QPushButton#tuichu:hover\n"
"{\n"
"background-color:rgb(51, 102, 153);\n"
"}\n"
"QPushButton#tuichu\n"
"{\n"
"background-color:transparent;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        top->raise();
        tuichu->raise();
        zuixiaohua->raise();
        checkBox->raise();
        checkBox_2->raise();
        EditPassword->raise();
        commandLinkButton->raise();
        Administrators->raise();
        loginButton->raise();
        eye->raise();
        student->raise();
        EditAccount->raise();
        label->raise();
        teacher->raise();
        tuichu->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        loginButton->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("MainWindow", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", Q_NULLPTR));
        eye->setText(QString());
        zuixiaohua->setText(QString());
        student->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237", Q_NULLPTR));
        teacher->setText(QApplication::translate("MainWindow", "\346\225\231\345\270\210", Q_NULLPTR));
        Administrators->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        label->setText(QString());
        top->setText(QString());
#ifndef QT_NO_TOOLTIP
        tuichu->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/image/tuichu.png\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tuichu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
