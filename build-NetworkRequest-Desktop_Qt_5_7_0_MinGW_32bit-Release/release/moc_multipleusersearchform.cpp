/****************************************************************************
** Meta object code from reading C++ file 'multipleusersearchform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NetworkRequest/multipleusersearchform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multipleusersearchform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MultipleUserSearchForm_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultipleUserSearchForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultipleUserSearchForm_t qt_meta_stringdata_MultipleUserSearchForm = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MultipleUserSearchForm"
QT_MOC_LITERAL(1, 23, 14), // "searchComplete"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "responseReady"
QT_MOC_LITERAL(4, 53, 14) // "QNetworkReply*"

    },
    "MultipleUserSearchForm\0searchComplete\0"
    "\0responseReady\0QNetworkReply*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultipleUserSearchForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void MultipleUserSearchForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultipleUserSearchForm *_t = static_cast<MultipleUserSearchForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchComplete((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->responseReady((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MultipleUserSearchForm::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MultipleUserSearchForm::searchComplete)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MultipleUserSearchForm::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MultipleUserSearchForm.data,
      qt_meta_data_MultipleUserSearchForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MultipleUserSearchForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultipleUserSearchForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MultipleUserSearchForm.stringdata0))
        return static_cast<void*>(const_cast< MultipleUserSearchForm*>(this));
    return QObject::qt_metacast(_clname);
}

int MultipleUserSearchForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MultipleUserSearchForm::searchComplete(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
