/****************************************************************************
** Meta object code from reading C++ file 'dialogclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../manageBill/dialogclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogClient_t {
    QByteArrayData data[10];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogClient_t qt_meta_stringdata_DialogClient = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DialogClient"
QT_MOC_LITERAL(1, 13, 30), // "on_pushButtonAddClient_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 39), // "on_tableWidgetInvoice_cellDou..."
QT_MOC_LITERAL(4, 85, 3), // "row"
QT_MOC_LITERAL(5, 89, 6), // "column"
QT_MOC_LITERAL(6, 96, 31), // "on_pushButtonAddInvoice_clicked"
QT_MOC_LITERAL(7, 128, 27), // "on_pushButtonSearch_clicked"
QT_MOC_LITERAL(8, 156, 25), // "on_pushButtonBack_clicked"
QT_MOC_LITERAL(9, 182, 38) // "on_tableWidgetClient_cellDoub..."

    },
    "DialogClient\0on_pushButtonAddClient_clicked\0"
    "\0on_tableWidgetInvoice_cellDoubleClicked\0"
    "row\0column\0on_pushButtonAddInvoice_clicked\0"
    "on_pushButtonSearch_clicked\0"
    "on_pushButtonBack_clicked\0"
    "on_tableWidgetClient_cellDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    2,   45,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    2,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

       0        // eod
};

void DialogClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogClient *_t = static_cast<DialogClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonAddClient_clicked(); break;
        case 1: _t->on_tableWidgetInvoice_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_pushButtonAddInvoice_clicked(); break;
        case 3: _t->on_pushButtonSearch_clicked(); break;
        case 4: _t->on_pushButtonBack_clicked(); break;
        case 5: _t->on_tableWidgetClient_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogClient::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogClient.data,
      qt_meta_data_DialogClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogClient.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
