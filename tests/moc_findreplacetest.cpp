/****************************************************************************
** Meta object code from reading C++ file 'findreplacetest.h'
**
** Created: Fri Dec 30 16:36:16 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "findreplacetest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findreplacetest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FindReplaceTest[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      32,   16,   16,   16, 0x08,
      50,   16,   16,   16, 0x08,
      61,   16,   16,   16, 0x08,
      77,   16,   16,   16, 0x08,
      91,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FindReplaceTest[] = {
    "FindReplaceTest\0\0initTestCase()\0"
    "cleanupTestCase()\0testFind()\0"
    "testFind_data()\0testReplace()\0"
    "testReplace_data()\0"
};

const QMetaObject FindReplaceTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FindReplaceTest,
      qt_meta_data_FindReplaceTest, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FindReplaceTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FindReplaceTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FindReplaceTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FindReplaceTest))
        return static_cast<void*>(const_cast< FindReplaceTest*>(this));
    return QObject::qt_metacast(_clname);
}

int FindReplaceTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initTestCase(); break;
        case 1: cleanupTestCase(); break;
        case 2: testFind(); break;
        case 3: testFind_data(); break;
        case 4: testReplace(); break;
        case 5: testReplace_data(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
