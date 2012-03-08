/****************************************************************************
** Meta object code from reading C++ file 'grepoutputview.h'
**
** Created: Thu Mar 8 12:45:28 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "grepoutputview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grepoutputview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GrepOutputView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   37,   15,   15, 0x0a,
      85,   76,   15,   15, 0x0a,
     145,  125,   15,   15, 0x0a,
     193,  187,   15,   15, 0x0a,
     210,   15,   15,   15, 0x0a,
     242,   15,   15,   15, 0x08,
     263,   15,   15,   15, 0x08,
     280,   15,   15,   15, 0x08,
     299,   15,   15,   15, 0x08,
     316,   15,   15,   15, 0x08,
     326,   15,   15,   15, 0x08,
     346,  339,   15,   15, 0x08,
     374,   15,   15,   15, 0x08,
     388,   15,   15,   15, 0x08,
     413,  409,   15,   15, 0x08,
     446,  187,   15,   15, 0x08,
     476,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GrepOutputView[] = {
    "GrepOutputView\0\0outputViewIsClosed()\0"
    "errorMessage\0showErrorMessage(QString)\0"
    ",message\0showMessage(KDevelop::IStatus*,QString)\0"
    "topLeft,bottomRight\0"
    "updateApplyState(QModelIndex,QModelIndex)\0"
    "index\0changeModel(int)\0"
    "replacementTextChanged(QString)\0"
    "selectPreviousItem()\0selectNextItem()\0"
    "collapseAllItems()\0expandAllItems()\0"
    "onApply()\0showDialog()\0parent\0"
    "expandElements(QModelIndex)\0rowsRemoved()\0"
    "clearSearchHistory()\0pos\0"
    "modelSelectorContextMenu(QPoint)\0"
    "updateScrollArea(QModelIndex)\0"
    "updateCheckable()\0"
};

void GrepOutputView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GrepOutputView *_t = static_cast<GrepOutputView *>(_o);
        switch (_id) {
        case 0: _t->outputViewIsClosed(); break;
        case 1: _t->showErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showMessage((*reinterpret_cast< KDevelop::IStatus*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->updateApplyState((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->changeModel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->replacementTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->selectPreviousItem(); break;
        case 7: _t->selectNextItem(); break;
        case 8: _t->collapseAllItems(); break;
        case 9: _t->expandAllItems(); break;
        case 10: _t->onApply(); break;
        case 11: _t->showDialog(); break;
        case 12: _t->expandElements((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->rowsRemoved(); break;
        case 14: _t->clearSearchHistory(); break;
        case 15: _t->modelSelectorContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 16: _t->updateScrollArea((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->updateCheckable(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GrepOutputView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GrepOutputView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GrepOutputView,
      qt_meta_data_GrepOutputView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GrepOutputView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GrepOutputView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GrepOutputView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GrepOutputView))
        return static_cast<void*>(const_cast< GrepOutputView*>(this));
    if (!strcmp(_clname, "Ui::GrepOutputView"))
        return static_cast< Ui::GrepOutputView*>(const_cast< GrepOutputView*>(this));
    return QWidget::qt_metacast(_clname);
}

int GrepOutputView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void GrepOutputView::outputViewIsClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
