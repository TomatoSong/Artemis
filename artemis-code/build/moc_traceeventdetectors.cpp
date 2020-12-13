/****************************************************************************
** Meta object code from reading C++ file 'traceeventdetectors.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/concolic/traceeventdetectors.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traceeventdetectors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__TraceEventDetector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_artemis__TraceEventDetector[] = {
    "artemis::TraceEventDetector\0"
};

void artemis::TraceEventDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData artemis::TraceEventDetector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::TraceEventDetector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_artemis__TraceEventDetector,
      qt_meta_data_artemis__TraceEventDetector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::TraceEventDetector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::TraceEventDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::TraceEventDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__TraceEventDetector))
        return static_cast<void*>(const_cast< TraceEventDetector*>(this));
    return QObject::qt_metacast(_clname);
}

int artemis::TraceEventDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_artemis__TraceBranchDetector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      74,   30,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_artemis__TraceBranchDetector[] = {
    "artemis::TraceBranchDetector\0\0"
    "jump,condition,sourceOffset,source,byteInfo\0"
    "slBranch(bool,Symbolic::Expression*,uint,QSource*,ByteCodeInfoStruct)\0"
};

void artemis::TraceBranchDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TraceBranchDetector *_t = static_cast<TraceBranchDetector *>(_o);
        switch (_id) {
        case 0: _t->slBranch((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< Symbolic::Expression*(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QSource*(*)>(_a[4])),(*reinterpret_cast< const ByteCodeInfoStruct(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::TraceBranchDetector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::TraceBranchDetector::staticMetaObject = {
    { &TraceEventDetector::staticMetaObject, qt_meta_stringdata_artemis__TraceBranchDetector,
      qt_meta_data_artemis__TraceBranchDetector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::TraceBranchDetector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::TraceBranchDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::TraceBranchDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__TraceBranchDetector))
        return static_cast<void*>(const_cast< TraceBranchDetector*>(this));
    return TraceEventDetector::qt_metacast(_clname);
}

int artemis::TraceBranchDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TraceEventDetector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_artemis__TraceAlertDetector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   29,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__TraceAlertDetector[] = {
    "artemis::TraceAlertDetector\0\0frame,msg\0"
    "slJavascriptAlert(QWebFrame*,QString)\0"
};

void artemis::TraceAlertDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TraceAlertDetector *_t = static_cast<TraceAlertDetector *>(_o);
        switch (_id) {
        case 0: _t->slJavascriptAlert((*reinterpret_cast< QWebFrame*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::TraceAlertDetector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::TraceAlertDetector::staticMetaObject = {
    { &TraceEventDetector::staticMetaObject, qt_meta_stringdata_artemis__TraceAlertDetector,
      qt_meta_data_artemis__TraceAlertDetector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::TraceAlertDetector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::TraceAlertDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::TraceAlertDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__TraceAlertDetector))
        return static_cast<void*>(const_cast< TraceAlertDetector*>(this));
    return TraceEventDetector::qt_metacast(_clname);
}

int artemis::TraceAlertDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TraceEventDetector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_artemis__TraceConsoleMessageDetector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   38,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__TraceConsoleMessageDetector[] = {
    "artemis::TraceConsoleMessageDetector\0"
    "\0msg\0slJavascriptConsoleMessage(QString)\0"
};

void artemis::TraceConsoleMessageDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TraceConsoleMessageDetector *_t = static_cast<TraceConsoleMessageDetector *>(_o);
        switch (_id) {
        case 0: _t->slJavascriptConsoleMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::TraceConsoleMessageDetector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::TraceConsoleMessageDetector::staticMetaObject = {
    { &TraceEventDetector::staticMetaObject, qt_meta_stringdata_artemis__TraceConsoleMessageDetector,
      qt_meta_data_artemis__TraceConsoleMessageDetector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::TraceConsoleMessageDetector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::TraceConsoleMessageDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::TraceConsoleMessageDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__TraceConsoleMessageDetector))
        return static_cast<void*>(const_cast< TraceConsoleMessageDetector*>(this));
    return TraceEventDetector::qt_metacast(_clname);
}

int artemis::TraceConsoleMessageDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TraceEventDetector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_artemis__TraceFunctionCallDetector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
     100,   36,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__TraceFunctionCallDetector[] = {
    "artemis::TraceFunctionCallDetector\0\0"
    "functionName,bytecodeSize,functionStartLine,sourceOffset,source\0"
    "slJavascriptFunctionCalled(QString,size_t,uint,uint,QSource*)\0"
};

void artemis::TraceFunctionCallDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TraceFunctionCallDetector *_t = static_cast<TraceFunctionCallDetector *>(_o);
        switch (_id) {
        case 0: _t->slJavascriptFunctionCalled((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< QSource*(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::TraceFunctionCallDetector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::TraceFunctionCallDetector::staticMetaObject = {
    { &TraceEventDetector::staticMetaObject, qt_meta_stringdata_artemis__TraceFunctionCallDetector,
      qt_meta_data_artemis__TraceFunctionCallDetector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::TraceFunctionCallDetector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::TraceFunctionCallDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::TraceFunctionCallDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__TraceFunctionCallDetector))
        return static_cast<void*>(const_cast< TraceFunctionCallDetector*>(this));
    return TraceEventDetector::qt_metacast(_clname);
}

int artemis::TraceFunctionCallDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TraceEventDetector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_artemis__TracePageLoadDetector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   32,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__TracePageLoadDetector[] = {
    "artemis::TracePageLoadDetector\0\0url\0"
    "slPageLoad(QUrl)\0"
};

void artemis::TracePageLoadDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TracePageLoadDetector *_t = static_cast<TracePageLoadDetector *>(_o);
        switch (_id) {
        case 0: _t->slPageLoad((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::TracePageLoadDetector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::TracePageLoadDetector::staticMetaObject = {
    { &TraceEventDetector::staticMetaObject, qt_meta_stringdata_artemis__TracePageLoadDetector,
      qt_meta_data_artemis__TracePageLoadDetector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::TracePageLoadDetector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::TracePageLoadDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::TracePageLoadDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__TracePageLoadDetector))
        return static_cast<void*>(const_cast< TracePageLoadDetector*>(this));
    return TraceEventDetector::qt_metacast(_clname);
}

int artemis::TracePageLoadDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TraceEventDetector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_artemis__TraceDomModDetector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   30,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__TraceDomModDetector[] = {
    "artemis::TraceDomModDetector\0\0start,end\0"
    "slDomModified(QString,QString)\0"
};

void artemis::TraceDomModDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TraceDomModDetector *_t = static_cast<TraceDomModDetector *>(_o);
        switch (_id) {
        case 0: _t->slDomModified((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::TraceDomModDetector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::TraceDomModDetector::staticMetaObject = {
    { &TraceEventDetector::staticMetaObject, qt_meta_stringdata_artemis__TraceDomModDetector,
      qt_meta_data_artemis__TraceDomModDetector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::TraceDomModDetector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::TraceDomModDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::TraceDomModDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__TraceDomModDetector))
        return static_cast<void*>(const_cast< TraceDomModDetector*>(this));
    return TraceEventDetector::qt_metacast(_clname);
}

int artemis::TraceDomModDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TraceEventDetector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_artemis__TraceMarkerDetector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      80,   30,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__TraceMarkerDetector[] = {
    "artemis::TraceMarkerDetector\0\0"
    "label,index,isSelectRestriction,selectRestriction\0"
    "slNewMarker(QString,QString,bool,SelectRestriction)\0"
};

void artemis::TraceMarkerDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TraceMarkerDetector *_t = static_cast<TraceMarkerDetector *>(_o);
        switch (_id) {
        case 0: _t->slNewMarker((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< SelectRestriction(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::TraceMarkerDetector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::TraceMarkerDetector::staticMetaObject = {
    { &TraceEventDetector::staticMetaObject, qt_meta_stringdata_artemis__TraceMarkerDetector,
      qt_meta_data_artemis__TraceMarkerDetector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::TraceMarkerDetector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::TraceMarkerDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::TraceMarkerDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__TraceMarkerDetector))
        return static_cast<void*>(const_cast< TraceMarkerDetector*>(this));
    return TraceEventDetector::qt_metacast(_clname);
}

int artemis::TraceMarkerDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TraceEventDetector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
