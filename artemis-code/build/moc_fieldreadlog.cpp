/****************************************************************************
** Meta object code from reading C++ file 'fieldreadlog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/runtime/analysisserver/fieldreadlog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fieldreadlog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__FieldReadLog[] = {

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
      43,   23,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__FieldReadLog[] = {
    "artemis::FieldReadLog\0\0variable,isSymbolic\0"
    "slJavascriptSymbolicFieldRead(QString,bool)\0"
};

void artemis::FieldReadLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FieldReadLog *_t = static_cast<FieldReadLog *>(_o);
        switch (_id) {
        case 0: _t->slJavascriptSymbolicFieldRead((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::FieldReadLog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::FieldReadLog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_artemis__FieldReadLog,
      qt_meta_data_artemis__FieldReadLog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::FieldReadLog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::FieldReadLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::FieldReadLog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__FieldReadLog))
        return static_cast<void*>(const_cast< FieldReadLog*>(this));
    return QObject::qt_metacast(_clname);
}

int artemis::FieldReadLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
