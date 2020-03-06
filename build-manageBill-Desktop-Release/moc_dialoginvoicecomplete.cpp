/****************************************************************************
** Meta object code from reading C++ file 'dialoginvoicecomplete.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../manageBill/dialoginvoicecomplete.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialoginvoicecomplete.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogInvoiceComplete_t {
    QByteArrayData data[10];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogInvoiceComplete_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogInvoiceComplete_t qt_meta_stringdata_DialogInvoiceComplete = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DialogInvoiceComplete"
QT_MOC_LITERAL(1, 22, 31), // "on_pushButtonPDFInvoice_clicked"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 25), // "on_pushButtonBack_clicked"
QT_MOC_LITERAL(4, 81, 31), // "on_pushButtonBillIsPaid_clicked"
QT_MOC_LITERAL(5, 113, 16), // "fillTableProduct"
QT_MOC_LITERAL(6, 130, 7), // "product"
QT_MOC_LITERAL(7, 138, 9), // "fillLabel"
QT_MOC_LITERAL(8, 148, 7), // "invoice"
QT_MOC_LITERAL(9, 156, 3) // "mod"

    },
    "DialogInvoiceComplete\0"
    "on_pushButtonPDFInvoice_clicked\0\0"
    "on_pushButtonBack_clicked\0"
    "on_pushButtonBillIsPaid_clicked\0"
    "fillTableProduct\0product\0fillLabel\0"
    "invoice\0mod"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogInvoiceComplete[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    2,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    9,

       0        // eod
};

void DialogInvoiceComplete::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogInvoiceComplete *_t = static_cast<DialogInvoiceComplete *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonPDFInvoice_clicked(); break;
        case 1: _t->on_pushButtonBack_clicked(); break;
        case 2: _t->on_pushButtonBillIsPaid_clicked(); break;
        case 3: _t->fillTableProduct((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->fillLabel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogInvoiceComplete::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogInvoiceComplete.data,
      qt_meta_data_DialogInvoiceComplete,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogInvoiceComplete::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogInvoiceComplete::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogInvoiceComplete.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogInvoiceComplete::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
