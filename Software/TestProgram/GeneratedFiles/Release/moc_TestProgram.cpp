/****************************************************************************
** Meta object code from reading C++ file 'TestProgram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TestProgram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestProgram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TestProgram_t {
    QByteArrayData data[22];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestProgram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestProgram_t qt_meta_stringdata_TestProgram = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TestProgram"
QT_MOC_LITERAL(1, 12, 13), // "addMessageBox"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "type"
QT_MOC_LITERAL(4, 32, 7), // "content"
QT_MOC_LITERAL(5, 40, 10), // "setContent"
QT_MOC_LITERAL(6, 51, 7), // "setBuff"
QT_MOC_LITERAL(7, 59, 7), // "records"
QT_MOC_LITERAL(8, 67, 11), // "addNewValue"
QT_MOC_LITERAL(9, 79, 5), // "value"
QT_MOC_LITERAL(10, 85, 5), // "index"
QT_MOC_LITERAL(11, 91, 22), // "on_ReadControl_clicked"
QT_MOC_LITERAL(12, 114, 23), // "on_GenerateTest_clicked"
QT_MOC_LITERAL(13, 138, 24), // "on_GenerateTest2_clicked"
QT_MOC_LITERAL(14, 163, 22), // "on_OpenAVCFile_clicked"
QT_MOC_LITERAL(15, 186, 22), // "on_SendPattern_clicked"
QT_MOC_LITERAL(16, 209, 10), // "openGithub"
QT_MOC_LITERAL(17, 220, 9), // "swtichTab"
QT_MOC_LITERAL(18, 230, 3), // "TAB"
QT_MOC_LITERAL(19, 234, 12), // "Introduction"
QT_MOC_LITERAL(20, 247, 6), // "Status"
QT_MOC_LITERAL(21, 254, 4) // "Open"

    },
    "TestProgram\0addMessageBox\0\0type\0content\0"
    "setContent\0setBuff\0records\0addNewValue\0"
    "value\0index\0on_ReadControl_clicked\0"
    "on_GenerateTest_clicked\0"
    "on_GenerateTest2_clicked\0"
    "on_OpenAVCFile_clicked\0on_SendPattern_clicked\0"
    "openGithub\0swtichTab\0TAB\0Introduction\0"
    "Status\0Open"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestProgram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,   92, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x0a /* Public */,
       5,    1,   74,    2, 0x0a /* Public */,
       6,    1,   77,    2, 0x0a /* Public */,
       8,    2,   80,    2, 0x0a /* Public */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,
      16,    0,   90,    2, 0x08 /* Private */,
      17,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      18, 0x0,    3,   96,

 // enum data: key, value
      19, uint(TestProgram::Introduction),
      20, uint(TestProgram::Status),
      21, uint(TestProgram::Open),

       0        // eod
};

void TestProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestProgram *_t = static_cast<TestProgram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addMessageBox((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->setContent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setBuff((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->addNewValue((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_ReadControl_clicked(); break;
        case 5: _t->on_GenerateTest_clicked(); break;
        case 6: _t->on_GenerateTest2_clicked(); break;
        case 7: _t->on_OpenAVCFile_clicked(); break;
        case 8: _t->on_SendPattern_clicked(); break;
        case 9: _t->openGithub(); break;
        case 10: _t->swtichTab(); break;
        default: ;
        }
    }
}

const QMetaObject TestProgram::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TestProgram.data,
      qt_meta_data_TestProgram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TestProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TestProgram.stringdata0))
        return static_cast<void*>(const_cast< TestProgram*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TestProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
