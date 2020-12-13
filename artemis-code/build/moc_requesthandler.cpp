/****************************************************************************
** Meta object code from reading C++ file 'requesthandler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/runtime/analysisserver/requesthandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'requesthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__RequestHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   25,   24,   24, 0x05,
      74,   59,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_artemis__RequestHandler[] = {
    "artemis::RequestHandler\0\0command\0"
    "sigNewCommand(CommandPtr)\0data,direction\0"
    "sigServerLog(QString,bool)\0"
    "slRequestFullyLoaded()\0"
};

void artemis::RequestHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RequestHandler *_t = static_cast<RequestHandler *>(_o);
        switch (_id) {
        case 0: _t->sigNewCommand((*reinterpret_cast< CommandPtr(*)>(_a[1]))); break;
        case 1: _t->sigServerLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->slRequestFullyLoaded(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::RequestHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::RequestHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_artemis__RequestHandler,
      qt_meta_data_artemis__RequestHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::RequestHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::RequestHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::RequestHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__RequestHandler))
        return static_cast<void*>(const_cast< RequestHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int artemis::RequestHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void artemis::RequestHandler::sigNewCommand(CommandPtr _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void artemis::RequestHandler::sigServerLog(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
