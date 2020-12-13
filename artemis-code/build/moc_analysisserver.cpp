/****************************************************************************
** Meta object code from reading C++ file 'analysisserver.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/runtime/analysisserver/analysisserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'analysisserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__AnalysisServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   25,   24,   24, 0x05,
      63,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     102,   85,   24,   24, 0x08,
     148,   25,   24,   24, 0x08,
     182,  173,   24,   24, 0x08,
     210,   24,   24,   24, 0x08,
     246,  231,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_artemis__AnalysisServer[] = {
    "artemis::AnalysisServer\0\0command\0"
    "sigExecuteCommand(CommandPtr)\0"
    "sigResponseFinished()\0request,response\0"
    "slHandleRequest(QHttpRequest*,QHttpResponse*)\0"
    "slNewCommand(CommandPtr)\0response\0"
    "slCommandFinished(QVariant)\0"
    "slResponseFinished()\0data,direction\0"
    "slServerLog(QString,bool)\0"
};

void artemis::AnalysisServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AnalysisServer *_t = static_cast<AnalysisServer *>(_o);
        switch (_id) {
        case 0: _t->sigExecuteCommand((*reinterpret_cast< CommandPtr(*)>(_a[1]))); break;
        case 1: _t->sigResponseFinished(); break;
        case 2: _t->slHandleRequest((*reinterpret_cast< QHttpRequest*(*)>(_a[1])),(*reinterpret_cast< QHttpResponse*(*)>(_a[2]))); break;
        case 3: _t->slNewCommand((*reinterpret_cast< CommandPtr(*)>(_a[1]))); break;
        case 4: _t->slCommandFinished((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 5: _t->slResponseFinished(); break;
        case 6: _t->slServerLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::AnalysisServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::AnalysisServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_artemis__AnalysisServer,
      qt_meta_data_artemis__AnalysisServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::AnalysisServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::AnalysisServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::AnalysisServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__AnalysisServer))
        return static_cast<void*>(const_cast< AnalysisServer*>(this));
    return QObject::qt_metacast(_clname);
}

int artemis::AnalysisServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void artemis::AnalysisServer::sigExecuteCommand(CommandPtr _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void artemis::AnalysisServer::sigResponseFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
