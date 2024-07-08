QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += axcontainer
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administer.cpp \
    changepassword.cpp \
    main.cpp \
    mainwindow.cpp \
    paper.cpp \
    student.cpp \
    studentchafen.cpp \
    studentexam.cpp \
    studentpreexam.cpp \
    studentwindow.cpp \
    teacherwindow.cpp \
    user.cpp \
    teacherquestion.cpp \
    teacherquestion2.cpp \
    teacherpaper.cpp \
    teacherscore.cpp

HEADERS += \
    administer.h \
    changepassword.h \
    mainwindow.h \
    paper.h \
    student.h \
    studentchafen.h \
    studentexam.h \
    studentpreexam.h \
    studentwindow.h \
    teacherwindow.h \
    user.h \
    teacherquestion.h \
    teacherquestion2.h \
    teacherpaper.h \
    teacherscore.h

FORMS += \
    administer.ui \
    changepassword.ui \
    mainwindow.ui \
    studentchafen.ui \
    studentexam.ui \
    studentpreexam.ui \
    studentwindow.ui \
    teacherwindow.ui \
    teacherquestion.ui \
    teacherquestion2.ui \
    teacherpaper.ui \
    teacherscore.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES +=
