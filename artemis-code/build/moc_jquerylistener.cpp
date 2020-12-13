/****************************************************************************
** Meta object code from reading C++ file 'jquerylistener.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/strategies/inputgenerator/targets/jquerylistener.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jquerylistener.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__JQueryListener[] = {

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
      57,   25,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__JQueryListener[] = {
    "artemis::JQueryListener\0\0"
    "elementSignature,event,selector\0"
    "slEventAdded(QString,QString,QString)\0"
};

void artemis::JQueryListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JQueryListener *_t = static_cast<JQueryListener *>(_o);
        switch (_id) {
        case 0: _t->slEventAdded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::JQueryListener::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::JQueryListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_artemis__JQueryListener,
      qt_meta_data_artemis__JQueryListener, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::JQueryListener::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::JQueryListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::JQueryListener::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__JQueryListener))
        return static_cast<void*>(const_cast< JQueryListener*>(this));
    return QObject::qt_metacast(_clname);
}

int artemis::JQueryListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
