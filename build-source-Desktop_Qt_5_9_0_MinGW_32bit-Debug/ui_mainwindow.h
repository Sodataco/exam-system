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
#include <QtWidgets/QGroupBox>
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
    QLabel *label;
    QLabel *top;
    QPushButton *tuichu;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox;
    QPushButton *student;
    QPushButton *teacher;
    QPushButton *Administrators;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(381, 493);
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
"border-radius:5px;\n"
"border-bottom:1px solid rgb(51, 102, 153);\n"
"}\n"
"QLineEdit:pressed\n"
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
"border-radius:5px;\n"
"border-bottom:1px solid rgb(51, 102, 153);\n"
"}\n"
"QLineEdit:pressed\n"
"{\n"
"background-color:rgb(232, 232, 232);\n"
"}"));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(90, 380, 201, 31));
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
"background-color:rgb(177, 204, 228);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(60, 340, 91, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font3.setPointSize(10);
        checkBox->setFont(font3);
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(160, 340, 81, 21));
        checkBox_2->setFont(font3);
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(250, 330, 91, 41));
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
        eye->setGeometry(QRect(310, 300, 16, 16));
        eye->setCheckable(true);
        zuixiaohua = new QPushButton(centralwidget);
        zuixiaohua->setObjectName(QStringLiteral("zuixiaohua"));
        zuixiaohua->setGeometry(QRect(340, 0, 21, 21));
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
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 120, 81, 81));
        label->setStyleSheet(QLatin1String("QLabel#label\n"
"{\n"
"border-radius:5px;\n"
"}"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/photo.png")));
        label->setScaledContents(true);
        top = new QLabel(centralwidget);
        top->setObjectName(QStringLiteral("top"));
        top->setGeometry(QRect(-10, -10, 391, 181));
        top->setPixmap(QPixmap(QString::fromUtf8(":/image/background.gif")));
        tuichu = new QPushButton(centralwidget);
        tuichu->setObjectName(QStringLiteral("tuichu"));
        tuichu->setGeometry(QRect(360, 0, 21, 21));
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 440, 31, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/logo.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 450, 111, 16));
        label_3->setFont(font3);
        label_3->setStyleSheet(QLatin1String("QLabel#label_3\n"
"{\n"
"color:rgb(25, 64, 56);\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 201, 21));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font5.setPointSize(16);
        label_4->setFont(font5);
        label_4->setStyleSheet(QLatin1String("QLabel#label_4\n"
"{\n"
"background-color:transparent;\n"
"color:white;\n"
"}"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 200, 211, 41));
        groupBox->setStyleSheet(QLatin1String("QGroupBox\n"
"{\n"
"border:none;\n"
"}"));
        groupBox->setCheckable(false);
        student = new QPushButton(groupBox);
        student->setObjectName(QStringLiteral("student"));
        student->setGeometry(QRect(0, 10, 71, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font6.setPointSize(14);
        student->setFont(font6);
        student->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(51, 102, 153);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(177, 204, 228);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
""));
        student->setCheckable(true);
        student->setAutoExclusive(true);
        teacher = new QPushButton(groupBox);
        teacher->setObjectName(QStringLiteral("teacher"));
        teacher->setGeometry(QRect(70, 10, 71, 31));
        teacher->setFont(font6);
        teacher->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(51, 102, 153);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(177, 204, 228);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
""));
        teacher->setCheckable(true);
        teacher->setAutoExclusive(true);
        Administrators = new QPushButton(groupBox);
        Administrators->setObjectName(QStringLiteral("Administrators"));
        Administrators->setGeometry(QRect(140, 10, 71, 31));
        Administrators->setFont(font6);
        Administrators->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:rgb(51, 102, 153);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(177, 204, 228);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
""));
        Administrators->setCheckable(true);
        Administrators->setAutoExclusive(true);
        MainWindow->setCentralWidget(centralwidget);
        top->raise();
        zuixiaohua->raise();
        checkBox->raise();
        checkBox_2->raise();
        EditPassword->raise();
        commandLinkButton->raise();
        loginButton->raise();
        eye->raise();
        EditAccount->raise();
        label->raise();
        tuichu->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        groupBox->raise();
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
        label->setText(QString());
        top->setText(QString());
#ifndef QT_NO_TOOLTIP
        tuichu->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/image/tuichu.png\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tuichu->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\351\207\215\347\224\237\344\271\213\346\210\221\345\234\250\346\255\246\345\244\247996\345\233\242\351\230\237", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", " \347\272\277\344\270\212\350\200\203\350\257\225\347\263\273\347\273\237", Q_NULLPTR));
        groupBox->setTitle(QString());
        student->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237", Q_NULLPTR));
        teacher->setText(QApplication::translate("MainWindow", "\346\225\231\345\270\210", Q_NULLPTR));
        Administrators->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
