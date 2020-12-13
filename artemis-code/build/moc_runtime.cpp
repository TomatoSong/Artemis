/****************************************************************************
** Meta object code from reading C++ file 'runtime.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/runtime/runtime.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'runtime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__Runtime[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   35,   17,   17, 0x09,
      97,   70,   17,   17, 0x09,
     132,  124,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_artemis__Runtime[] = {
    "artemis::Runtime\0\0sigTestingDone()\0"
    "reason\0slAbortedExecution(QString)\0"
    "timerId,timeout,singleShot\0"
    "slTimerAdded(int,int,bool)\0timerId\0"
    "slTimerRemoved(int)\0"
};

void artemis::Runtime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Runtime *_t = static_cast<Runtime *>(_o);
        switch (_id) {
        case 0: _t->sigTestingDone(); break;
        case 1: _t->slAbortedExecution((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slTimerAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->slTimerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::Runtime::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::Runtime::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_artemis__Runtime,
      qt_meta_data_artemis__Runtime, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::Runtime::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::Runtime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::Runtime::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__Runtime))
        return static_cast<void*>(const_cast< Runtime*>(this));
    return QObject::qt_metacast(_clname);
}

int artemis::Runtime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void artemis::Runtime::sigTestingDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
