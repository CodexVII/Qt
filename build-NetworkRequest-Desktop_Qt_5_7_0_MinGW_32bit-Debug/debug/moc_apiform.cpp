/****************************************************************************
** Meta object code from reading C++ file 'apiform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NetworkRequest/apiform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apiform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ApiForm_t {
    QByteArrayData data[16];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApiForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApiForm_t qt_meta_stringdata_ApiForm = {
    {
QT_MOC_LITERAL(0, 0, 7), // "ApiForm"
QT_MOC_LITERAL(1, 8, 13), // "onUserCreated"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 17), // "onPasswordUpdated"
QT_MOC_LITERAL(4, 41, 13), // "onUserDeleted"
QT_MOC_LITERAL(5, 55, 9), // "onPayment"
QT_MOC_LITERAL(6, 65, 14), // "onUserReceived"
QT_MOC_LITERAL(7, 80, 28), // "onMultipleUserSearchComplete"
QT_MOC_LITERAL(8, 109, 28), // "onTransactionHistoryReceived"
QT_MOC_LITERAL(9, 138, 25), // "on_updatePassword_clicked"
QT_MOC_LITERAL(10, 164, 21), // "on_deleteUser_clicked"
QT_MOC_LITERAL(11, 186, 21), // "on_createUser_clicked"
QT_MOC_LITERAL(12, 208, 18), // "on_payment_clicked"
QT_MOC_LITERAL(13, 227, 18), // "on_getUser_clicked"
QT_MOC_LITERAL(14, 246, 29), // "on_multipleUserSearch_clicked"
QT_MOC_LITERAL(15, 276, 32) // "on_getTransactionHistory_clicked"

    },
    "ApiForm\0onUserCreated\0\0onPasswordUpdated\0"
    "onUserDeleted\0onPayment\0onUserReceived\0"
    "onMultipleUserSearchComplete\0"
    "onTransactionHistoryReceived\0"
    "on_updatePassword_clicked\0"
    "on_deleteUser_clicked\0on_createUser_clicked\0"
    "on_payment_clicked\0on_getUser_clicked\0"
    "on_multipleUserSearch_clicked\0"
    "on_getTransactionHistory_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApiForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       3,    1,   87,    2, 0x0a /* Public */,
       4,    1,   90,    2, 0x0a /* Public */,
       5,    1,   93,    2, 0x0a /* Public */,
       6,    1,   96,    2, 0x0a /* Public */,
       7,    1,   99,    2, 0x0a /* Public */,
       8,    1,  102,    2, 0x0a /* Public */,
       9,    0,  105,    2, 0x08 /* Private */,
      10,    0,  106,    2, 0x08 /* Private */,
      11,    0,  107,    2, 0x08 /* Private */,
      12,    0,  108,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ApiForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApiForm *_t = static_cast<ApiForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onUserCreated((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->onPasswordUpdated((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->onUserDeleted((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->onPayment((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->onUserReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->onMultipleUserSearchComplete((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->onTransactionHistoryReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->on_updatePassword_clicked(); break;
        case 8: _t->on_deleteUser_clicked(); break;
        case 9: _t->on_createUser_clicked(); break;
        case 10: _t->on_payment_clicked(); break;
        case 11: _t->on_getUser_clicked(); break;
        case 12: _t->on_multipleUserSearch_clicked(); break;
        case 13: _t->on_getTransactionHistory_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ApiForm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ApiForm.data,
      qt_meta_data_ApiForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ApiForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApiForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ApiForm.stringdata0))
        return static_cast<void*>(const_cast< ApiForm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ApiForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
