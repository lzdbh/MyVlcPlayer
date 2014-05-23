/****************************************************************************
** Meta object code from reading C++ file 'playercontrols.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyVlcPlayer/playercontrols.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playercontrols.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlayerControls_t {
    QByteArrayData data[19];
    char stringdata[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PlayerControls_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PlayerControls_t qt_meta_stringdata_PlayerControls = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 4),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 5),
QT_MOC_LITERAL(4, 27, 4),
QT_MOC_LITERAL(5, 32, 4),
QT_MOC_LITERAL(6, 37, 8),
QT_MOC_LITERAL(7, 46, 12),
QT_MOC_LITERAL(8, 59, 6),
QT_MOC_LITERAL(9, 66, 12),
QT_MOC_LITERAL(10, 79, 6),
QT_MOC_LITERAL(11, 86, 8),
QT_MOC_LITERAL(12, 95, 14),
QT_MOC_LITERAL(13, 110, 5),
QT_MOC_LITERAL(14, 116, 9),
QT_MOC_LITERAL(15, 126, 8),
QT_MOC_LITERAL(16, 135, 5),
QT_MOC_LITERAL(17, 141, 11),
QT_MOC_LITERAL(18, 153, 11)
    },
    "PlayerControls\0play\0\0pause\0stop\0next\0"
    "previous\0changeVolume\0volume\0changeMuting\0"
    "muting\0setState\0libvlc_state_t\0state\0"
    "setVolume\0setMuted\0muted\0playClicked\0"
    "muteClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerControls[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06,
       3,    0,   75,    2, 0x06,
       4,    0,   76,    2, 0x06,
       5,    0,   77,    2, 0x06,
       6,    0,   78,    2, 0x06,
       7,    1,   79,    2, 0x06,
       9,    1,   82,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      11,    1,   85,    2, 0x0a,
      14,    1,   88,    2, 0x0a,
      15,    1,   91,    2, 0x0a,
      17,    0,   94,    2, 0x08,
      18,    0,   95,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlayerControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayerControls *_t = static_cast<PlayerControls *>(_o);
        switch (_id) {
        case 0: _t->play(); break;
        case 1: _t->pause(); break;
        case 2: _t->stop(); break;
        case 3: _t->next(); break;
        case 4: _t->previous(); break;
        case 5: _t->changeVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->changeMuting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setState((*reinterpret_cast< libvlc_state_t(*)>(_a[1]))); break;
        case 8: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->playClicked(); break;
        case 11: _t->muteClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlayerControls::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayerControls::play)) {
                *result = 0;
            }
        }
        {
            typedef void (PlayerControls::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayerControls::pause)) {
                *result = 1;
            }
        }
        {
            typedef void (PlayerControls::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayerControls::stop)) {
                *result = 2;
            }
        }
        {
            typedef void (PlayerControls::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayerControls::next)) {
                *result = 3;
            }
        }
        {
            typedef void (PlayerControls::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayerControls::previous)) {
                *result = 4;
            }
        }
        {
            typedef void (PlayerControls::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayerControls::changeVolume)) {
                *result = 5;
            }
        }
        {
            typedef void (PlayerControls::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayerControls::changeMuting)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject PlayerControls::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlayerControls.data,
      qt_meta_data_PlayerControls,  qt_static_metacall, 0, 0}
};


const QMetaObject *PlayerControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerControls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerControls.stringdata))
        return static_cast<void*>(const_cast< PlayerControls*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlayerControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PlayerControls::play()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PlayerControls::pause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PlayerControls::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void PlayerControls::next()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void PlayerControls::previous()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void PlayerControls::changeVolume(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlayerControls::changeMuting(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
