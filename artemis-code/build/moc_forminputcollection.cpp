/****************************************************************************
** Meta object code from reading C++ file 'forminputcollection.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/runtime/input/forms/forminputcollection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'forminputcollection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__FormInputCollection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      61,   55,   29,   29, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_artemis__FormInputCollection[] = {
    "artemis::FormInputCollection\0\0"
    "sigFinishedWriteToPage()\0field\0"
    "sigInjectedToField(FormFieldDescriptorConstPtr)\0"
};

void artemis::FormInputCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FormInputCollection *_t = static_cast<FormInputCollection *>(_o);
        switch (_id) {
        case 0: _t->sigFinishedWriteToPage(); break;
        case 1: _t->sigInjectedToField((*reinterpret_cast< FormFieldDescriptorConstPtr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::FormInputCollection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::FormInputCollection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_artemis__FormInputCollection,
      qt_meta_data_artemis__FormInputCollection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::FormInputCollection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::FormInputCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::FormInputCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__FormInputCollection))
        return static_cast<void*>(const_cast< FormInputCollection*>(this));
    return QObject::qt_metacast(_clname);
}

int artemis::FormInputCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void artemis::FormInputCollection::sigFinishedWriteToPage()const
{
    QMetaObject::activate(const_cast< artemis::FormInputCollection *>(this), &staticMetaObject, 0, 0);
}

// SIGNAL 1
void artemis::FormInputCollection::sigInjectedToField(FormFieldDescriptorConstPtr _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< artemis::FormInputCollection *>(this), &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
