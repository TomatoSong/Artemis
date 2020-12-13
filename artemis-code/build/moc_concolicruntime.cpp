/****************************************************************************
** Meta object code from reading C++ file 'concolicruntime.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/runtime/toplevel/concolicruntime.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'concolicruntime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__ConcolicRuntime[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      76,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     155,  134,   25,   25, 0x08,
     242,   25,   25,   25, 0x08,
     267,  261,   25,   25, 0x08,
     316,   25,   25,   25, 0x08,
     350,  340,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_artemis__ConcolicRuntime[] = {
    "artemis::ConcolicRuntime\0\0"
    "label,index,isSelectRestriction,selectRestriction\0"
    "sigNewTraceMarker(QString,QString,bool,SelectRestriction)\0"
    "configuration,result\0"
    "postConcreteExecution(ExecutableConfigurationConstPtr,QSharedPointer<E"
    "xecutionResult>)\0"
    "postAllInjection()\0field\0"
    "postSingleInjection(FormFieldDescriptorConstPtr)\0"
    "postSubmitButtonClick()\0tree,name\0"
    "slExecutionTreeUpdated(TraceNodePtr,QString)\0"
};

void artemis::ConcolicRuntime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConcolicRuntime *_t = static_cast<ConcolicRuntime *>(_o);
        switch (_id) {
        case 0: _t->sigNewTraceMarker((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< SelectRestriction(*)>(_a[4]))); break;
        case 1: _t->postConcreteExecution((*reinterpret_cast< ExecutableConfigurationConstPtr(*)>(_a[1])),(*reinterpret_cast< QSharedPointer<ExecutionResult>(*)>(_a[2]))); break;
        case 2: _t->postAllInjection(); break;
        case 3: _t->postSingleInjection((*reinterpret_cast< FormFieldDescriptorConstPtr(*)>(_a[1]))); break;
        case 4: _t->postSubmitButtonClick(); break;
        case 5: _t->slExecutionTreeUpdated((*reinterpret_cast< TraceNodePtr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::ConcolicRuntime::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::ConcolicRuntime::staticMetaObject = {
    { &Runtime::staticMetaObject, qt_meta_stringdata_artemis__ConcolicRuntime,
      qt_meta_data_artemis__ConcolicRuntime, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::ConcolicRuntime::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::ConcolicRuntime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::ConcolicRuntime::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__ConcolicRuntime))
        return static_cast<void*>(const_cast< ConcolicRuntime*>(this));
    return Runtime::qt_metacast(_clname);
}

int artemis::ConcolicRuntime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Runtime::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void artemis::ConcolicRuntime::sigNewTraceMarker(QString _t1, QString _t2, bool _t3, SelectRestriction _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
