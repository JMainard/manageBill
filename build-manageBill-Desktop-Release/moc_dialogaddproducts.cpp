/****************************************************************************
** Meta object code from reading C++ file 'dialogaddproducts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../manageBill/dialogaddproducts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogaddproducts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogAddProducts_t {
    QByteArrayData data[10];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogAddProducts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogAddProducts_t qt_meta_stringdata_DialogAddProducts = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DialogAddProducts"
QT_MOC_LITERAL(1, 18, 15), // "fillComboBoxTOQ"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 24), // "on_pushButtonAdd_clicked"
QT_MOC_LITERAL(4, 60, 25), // "on_pushButtonBack_clicked"
QT_MOC_LITERAL(5, 86, 20), // "fillComboBoxCategory"
QT_MOC_LITERAL(6, 107, 38), // "on_comboBoxCategory_currentTe..."
QT_MOC_LITERAL(7, 146, 4), // "arg1"
QT_MOC_LITERAL(8, 151, 39), // "on_comboBoxSCategory_currentT..."
QT_MOC_LITERAL(9, 191, 33) // "on_comboBoxTOQ_currentTextCha..."

    },
    "DialogAddProducts\0fillComboBoxTOQ\0\0"
    "on_pushButtonAdd_clicked\0"
    "on_pushButtonBack_clicked\0"
    "fillComboBoxCategory\0"
    "on_comboBoxCategory_currentTextChanged\0"
    "arg1\0on_comboBoxSCategory_currentTextChanged\0"
    "on_comboBoxTOQ_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogAddProducts[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void DialogAddProducts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogAddProducts *_t = static_cast<DialogAddProducts *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fillComboBoxTOQ(); break;
        case 1: _t->on_pushButtonAdd_clicked(); break;
        case 2: _t->on_pushButtonBack_clicked(); break;
        case 3: _t->fillComboBoxCategory(); break;
        case 4: _t->on_comboBoxCategory_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_comboBoxSCategory_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_comboBoxTOQ_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogAddProducts::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogAddProducts.data,
      qt_meta_data_DialogAddProducts,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogAddProducts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogAddProducts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogAddProducts.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogAddProducts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
