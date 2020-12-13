/****************************************************************************
** Meta object code from reading C++ file 'demowindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/runtime/demomode/demowindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demowindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_artemis__DemoModeMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   28,   28,   28, 0x09,
      59,   28,   28,   28, 0x09,
      78,   28,   28,   28, 0x09,
      97,   94,   28,   28, 0x09,
     120,  118,   28,   28, 0x09,
     143,  139,   28,   28, 0x09,
     162,   28,   28,   28, 0x09,
     176,   28,   28,   28, 0x09,
     199,   28,   28,   28, 0x09,
     238,  215,   28,   28, 0x09,
     291,  277,   28,   28, 0x09,
     329,   28,   28,   28, 0x09,
     346,   28,   28,   28, 0x09,
     379,  358,   28,   28, 0x09,
     482,  463,   28,   28, 0x09,
     555,   28,   28,   28, 0x09,
     586,   28,   28,   28, 0x09,
     610,   28,   28,   28, 0x09,
     632,   28,   28,   28, 0x09,
     651,   28,   28,   28, 0x09,
     671,   28,   28,   28, 0x09,
     694,   28,   28,   28, 0x09,
     718,   28,   28,   28, 0x09,
     744,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_artemis__DemoModeMainWindow[] = {
    "artemis::DemoModeMainWindow\0\0sigClose()\0"
    "slChangeLocation()\0slAdjustLocation()\0"
    "slLoadStarted()\0ok\0slLoadFinished(bool)\0"
    "p\0slSetProgress(int)\0url\0slUrlChanged(QUrl)\0"
    "slViewTrace()\0slGenerateTraceGraph()\0"
    "slAboutDialog()\0link,title,textContent\0"
    "slLinkHovered(QString,QString,QString)\0"
    "frame,message\0slJavascriptAlert(QWebFrame*,QString)\0"
    "slShowExamples()\0slDumpDOM()\0"
    "configuration,result\0"
    "slExecutedSequence(ExecutableConfigurationConstPtr,QSharedPointer<Exec"
    "utionResult>)\0"
    "frame,request,type\0"
    "slNavigationRequest(QWebFrame*,QNetworkRequest,QWebPage::NavigationTyp"
    "e)\0"
    "slEntryPointSelectionChanged()\0"
    "slStartTraceRecording()\0slEndTraceRecording()\0"
    "slAddedTraceNode()\0slShowTraceReport()\0"
    "slShowCoverageReport()\0slExportLinkedReports()\0"
    "slEnterManualEntryPoint()\0"
    "slClickManualEntryPoint()\0"
};

void artemis::DemoModeMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DemoModeMainWindow *_t = static_cast<DemoModeMainWindow *>(_o);
        switch (_id) {
        case 0: _t->sigClose(); break;
        case 1: _t->slChangeLocation(); break;
        case 2: _t->slAdjustLocation(); break;
        case 3: _t->slLoadStarted(); break;
        case 4: _t->slLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slSetProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->slViewTrace(); break;
        case 8: _t->slGenerateTraceGraph(); break;
        case 9: _t->slAboutDialog(); break;
        case 10: _t->slLinkHovered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->slJavascriptAlert((*reinterpret_cast< QWebFrame*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->slShowExamples(); break;
        case 13: _t->slDumpDOM(); break;
        case 14: _t->slExecutedSequence((*reinterpret_cast< ExecutableConfigurationConstPtr(*)>(_a[1])),(*reinterpret_cast< QSharedPointer<ExecutionResult>(*)>(_a[2]))); break;
        case 15: _t->slNavigationRequest((*reinterpret_cast< QWebFrame*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QWebPage::NavigationType(*)>(_a[3]))); break;
        case 16: _t->slEntryPointSelectionChanged(); break;
        case 17: _t->slStartTraceRecording(); break;
        case 18: _t->slEndTraceRecording(); break;
        case 19: _t->slAddedTraceNode(); break;
        case 20: _t->slShowTraceReport(); break;
        case 21: _t->slShowCoverageReport(); break;
        case 22: _t->slExportLinkedReports(); break;
        case 23: _t->slEnterManualEntryPoint(); break;
        case 24: _t->slClickManualEntryPoint(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData artemis::DemoModeMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject artemis::DemoModeMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_artemis__DemoModeMainWindow,
      qt_meta_data_artemis__DemoModeMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &artemis::DemoModeMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *artemis::DemoModeMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *artemis::DemoModeMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_artemis__DemoModeMainWindow))
        return static_cast<void*>(const_cast< DemoModeMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int artemis::DemoModeMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void artemis::DemoModeMainWindow::sigClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
