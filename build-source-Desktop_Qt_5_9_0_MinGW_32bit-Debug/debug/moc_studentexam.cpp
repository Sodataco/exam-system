/****************************************************************************
** Meta object code from reading C++ file 'studentexam.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../source/studentexam.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentexam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_studentexam_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_studentexam_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_studentexam_t qt_meta_stringdata_studentexam = {
    {
QT_MOC_LITERAL(0, 0, 11), // "studentexam"
QT_MOC_LITERAL(1, 12, 11), // "showpreexam"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "onOptionClicked"
QT_MOC_LITERAL(4, 41, 20), // "onRadioButtonClicked"
QT_MOC_LITERAL(5, 62, 17), // "onPreviousClicked"
QT_MOC_LITERAL(6, 80, 13), // "onNextClicked"
QT_MOC_LITERAL(7, 94, 13), // "onExitClicked"
QT_MOC_LITERAL(8, 108, 17), // "updateProgressBar"
QT_MOC_LITERAL(9, 126, 12) // "receivelogin"

    },
    "studentexam\0showpreexam\0\0onOptionClicked\0"
    "onRadioButtonClicked\0onPreviousClicked\0"
    "onNextClicked\0onExitClicked\0"
    "updateProgressBar\0receivelogin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_studentexam[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void studentexam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        studentexam *_t = static_cast<studentexam *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showpreexam(); break;
        case 1: _t->onOptionClicked(); break;
        case 2: _t->onRadioButtonClicked(); break;
        case 3: _t->onPreviousClicked(); break;
        case 4: _t->onNextClicked(); break;
        case 5: _t->onExitClicked(); break;
        case 6: _t->updateProgressBar(); break;
        case 7: _t->receivelogin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (studentexam::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&studentexam::showpreexam)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject studentexam::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_studentexam.data,
      qt_meta_data_studentexam,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *studentexam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *studentexam::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_studentexam.stringdata0))
        return static_cast<void*>(const_cast< studentexam*>(this));
    return QWidget::qt_metacast(_clname);
}

int studentexam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void studentexam::showpreexam()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
