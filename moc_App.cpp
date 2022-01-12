/****************************************************************************
** Meta object code from reading C++ file 'App.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "App.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'App.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_App_t {
    QByteArrayData data[7];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_App_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_App_t qt_meta_stringdata_App = {
    {
QT_MOC_LITERAL(0, 0, 3), // "App"
QT_MOC_LITERAL(1, 4, 10), // "getPlayers"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 4), // "addr"
QT_MOC_LITERAL(4, 21, 13), // "iconActivated"
QT_MOC_LITERAL(5, 35, 15), // "playersReceived"
QT_MOC_LITERAL(6, 51, 7) // "players"

    },
    "App\0getPlayers\0\0addr\0iconActivated\0"
    "playersReceived\0players"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_App[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void App::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<App *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getPlayers((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->iconActivated(); break;
        case 2: _t->playersReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (App::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&App::getPlayers)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject App::staticMetaObject = { {
    &QApplication::staticMetaObject,
    qt_meta_stringdata_App.data,
    qt_meta_data_App,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *App::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_App.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void App::getPlayers(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
