/****************************************************************************
** Meta object code from reading C++ file 'artemisruntime.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/runtime/toplevel/artemisruntime.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'artemisruntime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__ArtemisRuntime[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   25,   24,   24, 0x08,
     137,  133,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_artemis__ArtemisRuntime[] = {
    "artemis::ArtemisRuntime\0\0configuration,result\0"
    "postConcreteExecution(ExecutableConfigurationConstPtr,QSharedPointer<E"
    "xecutionResult>)\0"
    "url\0slPageLoaded(QUrl)\0"
};

void artemis::ArtemisRuntime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ArtemisRuntime *_t = static_cast<ArtemisRuntime *>(_o);
        switch (_id) {
        case 0: _t->postConcreteExecution((*reinterpret_cast< ExecutableConfigurationConstPtr(*)>(_a[1])),(*reinterpret_cast< QSharedPointer<ExecutionResult>(*)>(_a[2]))); break;
        case 1: _t->slPageLoaded((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::ArtemisRuntime::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::ArtemisRuntime::staticMetaObject = {
    { &Runtime::staticMetaObject, qt_meta_stringdata_artemis__ArtemisRuntime,
      qt_meta_data_artemis__ArtemisRuntime, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::ArtemisRuntime::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::ArtemisRuntime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::ArtemisRuntime::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__ArtemisRuntime))
        return static_cast<void*>(const_cast< ArtemisRuntime*>(this));
    return Runtime::qt_metacast(_clname);
}

int artemis::ArtemisRuntime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Runtime::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
