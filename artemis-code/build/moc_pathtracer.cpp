/****************************************************************************
** Meta object code from reading C++ file 'pathtracer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/model/pathtracer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathtracer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__PathTracer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      85,   21,   20,   20, 0x0a,
     160,  147,   20,   20, 0x0a,
     213,  198,   20,   20, 0x0a,
     270,  260,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__PathTracer[] = {
    "artemis::PathTracer\0\0"
    "functionName,bytecodeSize,functionStartLine,sourceOffset,source\0"
    "slJavascriptFunctionCalled(QString,size_t,uint,uint,QSource*)\0"
    "functionName\0slJavascriptFunctionReturned(QString)\0"
    "elem,eventName\0"
    "slEventListenerTriggered(QWebElement*,QString)\0"
    "frame,msg\0slJavascriptAlert(QWebFrame*,QString)\0"
};

void artemis::PathTracer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathTracer *_t = static_cast<PathTracer *>(_o);
        switch (_id) {
        case 0: _t->slJavascriptFunctionCalled((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< QSource*(*)>(_a[5]))); break;
        case 1: _t->slJavascriptFunctionReturned((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slEventListenerTriggered((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->slJavascriptAlert((*reinterpret_cast< QWebFrame*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::PathTracer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::PathTracer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_artemis__PathTracer,
      qt_meta_data_artemis__PathTracer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::PathTracer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::PathTracer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::PathTracer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__PathTracer))
        return static_cast<void*>(const_cast< PathTracer*>(this));
    return QObject::qt_metacast(_clname);
}

int artemis::PathTracer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
