/****************************************************************************
** Meta object code from reading C++ file 'progress.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../progress.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progress.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_progress_t {
    QByteArrayData data[16];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_progress_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_progress_t qt_meta_stringdata_progress = {
    {
QT_MOC_LITERAL(0, 0, 8), // "progress"
QT_MOC_LITERAL(1, 9, 10), // "finishFile"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "filename"
QT_MOC_LITERAL(4, 30, 4), // "node"
QT_MOC_LITERAL(5, 35, 6), // "getPro"
QT_MOC_LITERAL(6, 42, 7), // "allsize"
QT_MOC_LITERAL(7, 50, 7), // "nowsize"
QT_MOC_LITERAL(8, 58, 20), // "setFileNameCodeRange"
QT_MOC_LITERAL(9, 79, 3), // "num"
QT_MOC_LITERAL(10, 83, 4), // "code"
QT_MOC_LITERAL(11, 88, 4), // "name"
QT_MOC_LITERAL(12, 93, 5), // "range"
QT_MOC_LITERAL(13, 99, 12), // "setFileValue"
QT_MOC_LITERAL(14, 112, 5), // "value"
QT_MOC_LITERAL(15, 118, 17) // "getDeleteProgress"

    },
    "progress\0finishFile\0\0filename\0node\0"
    "getPro\0allsize\0nowsize\0setFileNameCodeRange\0"
    "num\0code\0name\0range\0setFileValue\0value\0"
    "getDeleteProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_progress[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    4,   44,    2, 0x0a /* Public */,
       8,    4,   53,    2, 0x0a /* Public */,
      13,    2,   62,    2, 0x0a /* Public */,
      15,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::QString,    3,    6,    7,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::ULongLong,    9,   14,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void progress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<progress *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
//        case 1: _t->getPro((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->setFileNameCodeRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 3: _t->setFileValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 4: _t->getDeleteProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (progress::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&progress::finishFile)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject progress::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_progress.data,
    qt_meta_data_progress,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *progress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *progress::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_progress.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int progress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void progress::finishFile(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
