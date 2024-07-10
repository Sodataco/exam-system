QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administer.cpp \
    changepassword.cpp \
    combinepaper.cpp \
    main.cpp \
    mainwindow.cpp \
    student.cpp \
    studentchafen.cpp \
    studentexam.cpp \
    studentpreexam.cpp \
    studentwindow.cpp \
    teacherwindow.cpp \
    user.cpp \
    teacherquestion.cpp \
    teacherpaper.cpp \
    teacherscore.cpp \
    teachermanage.cpp

HEADERS += \
    administer.h \
    changepassword.h \
    combinepaper.h \
    mainwindow.h \
    student.h \
    studentchafen.h \
    studentexam.h \
    studentpreexam.h \
    studentwindow.h \
    teacherwindow.h \
    user.h \
    teacherquestion.h \
    teacherpaper.h \
    teacherscore.h \
    teachermanage.h

FORMS += \
    administer.ui \
    changepassword.ui \
    combinepaper.ui \
    mainwindow.ui \
    studentchafen.ui \
    studentexam.ui \
    studentpreexam.ui \
    studentwindow.ui \
    teacherquestion.ui \
    teacherpaper.ui \
    teacherscore.ui \
    teacherwindow.ui \
    teachermanage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES +=
