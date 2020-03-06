/****************************************************************************
** Meta object code from reading C++ file 'dialogbalances.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../manageBill/dialogbalances.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogbalances.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogBalances_t {
    QByteArrayData data[18];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogBalances_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogBalances_t qt_meta_stringdata_DialogBalances = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DialogBalances"
QT_MOC_LITERAL(1, 15, 12), // "fillComboBox"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 25), // "on_pushButtonBack_clicked"
QT_MOC_LITERAL(4, 55, 25), // "on_checkBoxGlobal_clicked"
QT_MOC_LITERAL(5, 81, 23), // "on_pushButtonOk_clicked"
QT_MOC_LITERAL(6, 105, 13), // "fillTablePlus"
QT_MOC_LITERAL(7, 119, 7), // "request"
QT_MOC_LITERAL(8, 127, 14), // "fillTableMinus"
QT_MOC_LITERAL(9, 142, 13), // "fillTTInvoice"
QT_MOC_LITERAL(10, 156, 38), // "on_comboBoxCategory_currentTe..."
QT_MOC_LITERAL(11, 195, 4), // "arg1"
QT_MOC_LITERAL(12, 200, 20), // "fillTableMinusGlobal"
QT_MOC_LITERAL(13, 221, 10), // "requestSup"
QT_MOC_LITERAL(14, 232, 10), // "requestEmp"
QT_MOC_LITERAL(15, 243, 19), // "fillTTInvoiceGlobal"
QT_MOC_LITERAL(16, 263, 9), // "dateStart"
QT_MOC_LITERAL(17, 273, 7) // "dateEnd"

    },
    "DialogBalances\0fillComboBox\0\0"
    "on_pushButtonBack_clicked\0"
    "on_checkBoxGlobal_clicked\0"
    "on_pushButtonOk_clicked\0fillTablePlus\0"
    "request\0fillTableMinus\0fillTTInvoice\0"
    "on_comboBoxCategory_currentTextChanged\0"
    "arg1\0fillTableMinusGlobal\0requestSup\0"
    "requestEmp\0fillTTInvoiceGlobal\0dateStart\0"
    "dateEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogBalances[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,
       9,    1,   74,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      12,    2,   80,    2, 0x08 /* Private */,
      15,    2,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,

       0        // eod
};

void DialogBalances::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogBalances *_t = static_cast<DialogBalances *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fillComboBox(); break;
        case 1: _t->on_pushButtonBack_clicked(); break;
        case 2: _t->on_checkBoxGlobal_clicked(); break;
        case 3: _t->on_pushButtonOk_clicked(); break;
        case 4: _t->fillTablePlus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->fillTableMinus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->fillTTInvoice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_comboBoxCategory_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->fillTableMinusGlobal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->fillTTInvoiceGlobal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogBalances::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogBalances.data,
      qt_meta_data_DialogBalances,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogBalances::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogBalances::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogBalances.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogBalances::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
