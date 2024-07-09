/****************************************************************************
** Meta object code from reading C++ file 'studentwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../studentwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_studentwindow_t {
    QByteArrayData data[12];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_studentwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_studentwindow_t qt_meta_stringdata_studentwindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "studentwindow"
QT_MOC_LITERAL(1, 14, 8), // "showmain"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "showscore"
QT_MOC_LITERAL(4, 34, 18), // "showchangePassword"
QT_MOC_LITERAL(5, 53, 8), // "showeaxm"
QT_MOC_LITERAL(6, 62, 12), // "receivelogin"
QT_MOC_LITERAL(7, 75, 13), // "receiveReturn"
QT_MOC_LITERAL(8, 89, 21), // "on_loginagain_clicked"
QT_MOC_LITERAL(9, 111, 18), // "on_findBtn_clicked"
QT_MOC_LITERAL(10, 130, 25), // "on_changePassword_clicked"
QT_MOC_LITERAL(11, 156, 18) // "on_examBtn_clicked"

    },
    "studentwindow\0showmain\0\0showscore\0"
    "showchangePassword\0showeaxm\0receivelogin\0"
    "receiveReturn\0on_loginagain_clicked\0"
    "on_findBtn_clicked\0on_changePassword_clicked\0"
    "on_examBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_studentwindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void studentwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        studentwindow *_t = static_cast<studentwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showmain(); break;
        case 1: _t->showscore(); break;
        case 2: _t->showchangePassword(); break;
        case 3: _t->showeaxm(); break;
        case 4: _t->receivelogin(); break;
        case 5: _t->receiveReturn(); break;
        case 6: _t->on_loginagain_clicked(); break;
        case 7: _t->on_findBtn_clicked(); break;
        case 8: _t->on_changePassword_clicked(); break;
        case 9: _t->on_examBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (studentwindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&studentwindow::showmain)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (studentwindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&studentwindow::showscore)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (studentwindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&studentwindow::showchangePassword)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (studentwindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&studentwindow::showeaxm)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject studentwindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_studentwindow.data,
      qt_meta_data_studentwindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *studentwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *studentwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_studentwindow.stringdata0))
        return static_cast<void*>(const_cast< studentwindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int studentwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void studentwindow::showmain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void studentwindow::showscore()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void studentwindow::showchangePassword()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void studentwindow::showeaxm()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
