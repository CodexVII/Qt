/****************************************************************************
** Meta object code from reading C++ file 'loginregisterwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NetworkRequest/loginregisterwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginregisterwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginRegisterWindow_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginRegisterWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginRegisterWindow_t qt_meta_stringdata_LoginRegisterWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "LoginRegisterWindow"
QT_MOC_LITERAL(1, 20, 15), // "onLoginComplete"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18), // "onRegisterComplete"
QT_MOC_LITERAL(4, 56, 16), // "on_login_clicked"
QT_MOC_LITERAL(5, 73, 21) // "on_createUser_clicked"

    },
    "LoginRegisterWindow\0onLoginComplete\0"
    "\0onRegisterComplete\0on_login_clicked\0"
    "on_createUser_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginRegisterWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       3,    1,   37,    2, 0x0a /* Public */,
       4,    0,   40,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginRegisterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginRegisterWindow *_t = static_cast<LoginRegisterWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onLoginComplete((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->onRegisterComplete((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->on_login_clicked(); break;
        case 3: _t->on_createUser_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject LoginRegisterWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LoginRegisterWindow.data,
      qt_meta_data_LoginRegisterWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginRegisterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginRegisterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginRegisterWindow.stringdata0))
        return static_cast<void*>(const_cast< LoginRegisterWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int LoginRegisterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
