/****************************************************************************
** Meta object code from reading C++ file 'administer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../source/administer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'administer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Administer_t {
    QByteArrayData data[11];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Administer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Administer_t qt_meta_stringdata_Administer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Administer"
QT_MOC_LITERAL(1, 11, 8), // "showmain"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "receivelogin"
QT_MOC_LITERAL(4, 34, 22), // "on_importExcel_clicked"
QT_MOC_LITERAL(5, 57, 24), // "on_importAccount_clicked"
QT_MOC_LITERAL(6, 82, 22), // "on_changegrade_clicked"
QT_MOC_LITERAL(7, 105, 17), // "on_manage_clicked"
QT_MOC_LITERAL(8, 123, 17), // "on_Return_clicked"
QT_MOC_LITERAL(9, 141, 24), // "on_resetPassword_clicked"
QT_MOC_LITERAL(10, 166, 23) // "on_finishimport_clicked"

    },
    "Administer\0showmain\0\0receivelogin\0"
    "on_importExcel_clicked\0on_importAccount_clicked\0"
    "on_changegrade_clicked\0on_manage_clicked\0"
    "on_Return_clicked\0on_resetPassword_clicked\0"
    "on_finishimport_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Administer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void Administer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Administer *_t = static_cast<Administer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showmain(); break;
        case 1: _t->receivelogin(); break;
        case 2: _t->on_importExcel_clicked(); break;
        case 3: _t->on_importAccount_clicked(); break;
        case 4: _t->on_changegrade_clicked(); break;
        case 5: _t->on_manage_clicked(); break;
        case 6: _t->on_Return_clicked(); break;
        case 7: _t->on_resetPassword_clicked(); break;
        case 8: _t->on_finishimport_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Administer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Administer::showmain)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Administer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Administer.data,
      qt_meta_data_Administer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Administer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Administer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Administer.stringdata0))
        return static_cast<void*>(const_cast< Administer*>(this));
    return QWidget::qt_metacast(_clname);
}

int Administer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Administer::showmain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
