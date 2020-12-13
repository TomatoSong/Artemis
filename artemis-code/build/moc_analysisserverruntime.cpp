/****************************************************************************
** Meta object code from reading C++ file 'analysisserverruntime.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/runtime/toplevel/analysisserverruntime.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'analysisserverruntime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__AnalysisServerRuntime[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      41,   32,   31,   31, 0x05,
     120,   70,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
     186,  178,   31,   31, 0x09,
     215,   31,   31,   31, 0x09,
     236,   31,   31,   31, 0x09,
     282,  261,   31,   31, 0x09,
     385,  366,   31,   31, 0x09,
     462,  458,   31,   31, 0x09,
     495,  488,   31,   31, 0x09,
     523,   31,   31,   31, 0x09,
     555,  545,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_artemis__AnalysisServerRuntime[] = {
    "artemis::AnalysisServerRuntime\0\0"
    "response\0sigCommandFinished(QVariant)\0"
    "label,index,isSelectRestriction,selectRestriction\0"
    "sigNewTraceMarker(QString,QString,bool,SelectRestriction)\0"
    "command\0slExecuteCommand(CommandPtr)\0"
    "slResponseFinished()\0slLoadTimeoutTriggered()\0"
    "configuration,result\0"
    "slExecutedSequence(ExecutableConfigurationConstPtr,QSharedPointer<Exec"
    "utionResult>)\0"
    "frame,request,type\0"
    "slNavigationRequest(QWebFrame*,QNetworkRequest,QWebPage::NavigationTyp"
    "e)\0"
    "url\0slPageLoadScheduled(QUrl)\0reason\0"
    "slAbortedExecution(QString)\0"
    "slDebugWindowClosed()\0tree,name\0"
    "slExecutionTreeUpdated(TraceNodePtr,QString)\0"
};

void artemis::AnalysisServerRuntime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AnalysisServerRuntime *_t = static_cast<AnalysisServerRuntime *>(_o);
        switch (_id) {
        case 0: _t->sigCommandFinished((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->sigNewTraceMarker((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< SelectRestriction(*)>(_a[4]))); break;
        case 2: _t->slExecuteCommand((*reinterpret_cast< CommandPtr(*)>(_a[1]))); break;
        case 3: _t->slResponseFinished(); break;
        case 4: _t->slLoadTimeoutTriggered(); break;
        case 5: _t->slExecutedSequence((*reinterpret_cast< ExecutableConfigurationConstPtr(*)>(_a[1])),(*reinterpret_cast< QSharedPointer<ExecutionResult>(*)>(_a[2]))); break;
        case 6: _t->slNavigationRequest((*reinterpret_cast< QWebFrame*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QWebPage::NavigationType(*)>(_a[3]))); break;
        case 7: _t->slPageLoadScheduled((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 8: _t->slAbortedExecution((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->slDebugWindowClosed(); break;
        case 10: _t->slExecutionTreeUpdated((*reinterpret_cast< TraceNodePtr(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::AnalysisServerRuntime::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::AnalysisServerRuntime::staticMetaObject = {
    { &Runtime::staticMetaObject, qt_meta_stringdata_artemis__AnalysisServerRuntime,
      qt_meta_data_artemis__AnalysisServerRuntime, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::AnalysisServerRuntime::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::AnalysisServerRuntime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::AnalysisServerRuntime::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__AnalysisServerRuntime))
        return static_cast<void*>(const_cast< AnalysisServerRuntime*>(this));
    return Runtime::qt_metacast(_clname);
}

int artemis::AnalysisServerRuntime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Runtime::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void artemis::AnalysisServerRuntime::sigCommandFinished(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void artemis::AnalysisServerRuntime::sigNewTraceMarker(QString _t1, QString _t2, bool _t3, SelectRestriction _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
