/****************************************************************************
** Meta object code from reading C++ file 'dialogaddinvoice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../manageBill/dialogaddinvoice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogaddinvoice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogAddInvoice_t {
    QByteArrayData data[14];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogAddInvoice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogAddInvoice_t qt_meta_stringdata_DialogAddInvoice = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DialogAddInvoice"
QT_MOC_LITERAL(1, 17, 24), // "on_pushButtonAdd_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "on_pushButtonBack_clicked"
QT_MOC_LITERAL(4, 69, 29), // "on_pushButtonAddHuman_clicked"
QT_MOC_LITERAL(5, 99, 27), // "on_pushButtonSearch_clicked"
QT_MOC_LITERAL(6, 127, 40), // "on_comboBoxCategory_2_current..."
QT_MOC_LITERAL(7, 168, 4), // "arg1"
QT_MOC_LITERAL(8, 173, 39), // "on_comboBoxSCategory_currentT..."
QT_MOC_LITERAL(9, 213, 34), // "on_pushButtonAddNewProduct_cl..."
QT_MOC_LITERAL(10, 248, 40), // "on_pushButtonAddProductToInvo..."
QT_MOC_LITERAL(11, 289, 11), // "fillProduct"
QT_MOC_LITERAL(12, 301, 13), // "insertProduct"
QT_MOC_LITERAL(13, 315, 7) // "idOnAdd"

    },
    "DialogAddInvoice\0on_pushButtonAdd_clicked\0"
    "\0on_pushButtonBack_clicked\0"
    "on_pushButtonAddHuman_clicked\0"
    "on_pushButtonSearch_clicked\0"
    "on_comboBoxCategory_2_currentTextChanged\0"
    "arg1\0on_comboBoxSCategory_currentTextChanged\0"
    "on_pushButtonAddNewProduct_clicked\0"
    "on_pushButtonAddProductToInvoice_clicked\0"
    "fillProduct\0insertProduct\0idOnAdd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogAddInvoice[] = {

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
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void DialogAddInvoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogAddInvoice *_t = static_cast<DialogAddInvoice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonAdd_clicked(); break;
        case 1: _t->on_pushButtonBack_clicked(); break;
        case 2: _t->on_pushButtonAddHuman_clicked(); break;
        case 3: _t->on_pushButtonSearch_clicked(); break;
        case 4: _t->on_comboBoxCategory_2_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_comboBoxSCategory_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButtonAddNewProduct_clicked(); break;
        case 7: _t->on_pushButtonAddProductToInvoice_clicked(); break;
        case 8: _t->fillProduct(); break;
        case 9: _t->insertProduct((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogAddInvoice::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogAddInvoice.data,
      qt_meta_data_DialogAddInvoice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogAddInvoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogAddInvoice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogAddInvoice.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogAddInvoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
