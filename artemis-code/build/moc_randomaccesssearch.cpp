/****************************************************************************
** Meta object code from reading C++ file 'randomaccesssearch.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/concolic/search/randomaccesssearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'randomaccesssearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__RandomAccessSearch[] = {

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
      63,   29,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_artemis__RandomAccessSearch[] = {
    "artemis::RandomAccessSearch\0\0"
    "parent,direction,suffix,fullTrace\0"
    "slNewTraceAdded(TraceNodePtr,int,TraceNodePtr,TraceNodePtr)\0"
};

void artemis::RandomAccessSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RandomAccessSearch *_t = static_cast<RandomAccessSearch *>(_o);
        switch (_id) {
        case 0: _t->slNewTraceAdded((*reinterpret_cast< TraceNodePtr(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< TraceNodePtr(*)>(_a[3])),(*reinterpret_cast< TraceNodePtr(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::RandomAccessSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::RandomAccessSearch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_artemis__RandomAccessSearch,
      qt_meta_data_artemis__RandomAccessSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::RandomAccessSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::RandomAccessSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::RandomAccessSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__RandomAccessSearch))
        return static_cast<void*>(const_cast< RandomAccessSearch*>(this));
    if (!strcmp(_clname, "TreeSearch"))
        return static_cast< TreeSearch*>(const_cast< RandomAccessSearch*>(this));
    return QObject::qt_metacast(_clname);
}

int artemis::RandomAccessSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
