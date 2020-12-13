/****************************************************************************
** Meta object code from reading C++ file 'executionresultbuilder.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/runtime/browser/executionresultbuilder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'executionresultbuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__ExecutionResultBuilder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      43,   33,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   75,   32,   32, 0x0a,
     139,   32,   32,   32, 0x0a,
     190,  163,   32,   32, 0x0a,
     225,  217,   32,   32, 0x0a,
     268,  245,   32,   32, 0x0a,
     329,  319,   32,   32, 0x0a,
     385,  374,   32,   32, 0x0a,
     427,  417,   32,   32, 0x0a,
     473,  464,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__ExecutionResultBuilder[] = {
    "artemis::ExecutionResultBuilder\0\0"
    "start,end\0sigDomModified(QString,QString)\0"
    "cause,sourceID,lineNumber\0"
    "slScriptCrashed(QString,intptr_t,int)\0"
    "slStringEvaled(QString)\0"
    "timerId,timeout,singleShot\0"
    "slTimerAdded(int,int,bool)\0timerId\0"
    "slTimerRemoved(int)\0elem,name,targetObject\0"
    "slEventListenerAdded(QWebElement*,QString,QString)\0"
    "elem,name\0slEventListenerRemoved(QWebElement*,QString)\0"
    "callbackId\0slAjaxCallbackHandlerAdded(int)\0"
    ",postData\0slAjaxRequestInitiated(QUrl,QString)\0"
    "constant\0slJavascriptConstantStringEncountered(QString)\0"
};

void artemis::ExecutionResultBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExecutionResultBuilder *_t = static_cast<ExecutionResultBuilder *>(_o);
        switch (_id) {
        case 0: _t->sigDomModified((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->slScriptCrashed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< intptr_t(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->slStringEvaled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slTimerAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->slTimerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slEventListenerAdded((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->slEventListenerRemoved((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->slAjaxCallbackHandlerAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slAjaxRequestInitiated((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->slJavascriptConstantStringEncountered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::ExecutionResultBuilder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::ExecutionResultBuilder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_artemis__ExecutionResultBuilder,
      qt_meta_data_artemis__ExecutionResultBuilder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::ExecutionResultBuilder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::ExecutionResultBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::ExecutionResultBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__ExecutionResultBuilder))
        return static_cast<void*>(const_cast< ExecutionResultBuilder*>(this));
    return QObject::qt_metacast(_clname);
}

int artemis::ExecutionResultBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void artemis::ExecutionResultBuilder::sigDomModified(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
