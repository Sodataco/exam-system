/****************************************************************************
** Meta object code from reading C++ file 'studentpreexam.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../source/studentpreexam.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentpreexam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_studentpreexam_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_studentpreexam_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_studentpreexam_t qt_meta_stringdata_studentpreexam = {
    {
QT_MOC_LITERAL(0, 0, 14), // "studentpreexam"
QT_MOC_LITERAL(1, 15, 7), // "showstu"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "showexam"
QT_MOC_LITERAL(4, 33, 12), // "receivelogin"
QT_MOC_LITERAL(5, 46, 13), // "receiveReturn"
QT_MOC_LITERAL(6, 60, 17), // "on_Return_clicked"
QT_MOC_LITERAL(7, 78, 15) // "on_exam_clicked"

    },
    "studentpreexam\0showstu\0\0showexam\0"
    "receivelogin\0receiveReturn\0on_Return_clicked\0"
    "on_exam_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_studentpreexam[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int,
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void studentpreexam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        studentpreexam *_t = static_cast<studentpreexam *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->showstu();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->showexam();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->receivelogin(); break;
        case 3: _t->receiveReturn(); break;
        case 4: _t->on_Return_clicked(); break;
        case 5: _t->on_exam_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (studentpreexam::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&studentpreexam::showstu)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (studentpreexam::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&studentpreexam::showexam)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject studentpreexam::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_studentpreexam.data,
      qt_meta_data_studentpreexam,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *studentpreexam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *studentpreexam::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_studentpreexam.stringdata0))
        return static_cast<void*>(const_cast< studentpreexam*>(this));
    return QWidget::qt_metacast(_clname);
}

int studentpreexam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
int studentpreexam::showstu()
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int studentpreexam::showexam()
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
