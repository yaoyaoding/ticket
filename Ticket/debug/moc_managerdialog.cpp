/****************************************************************************
** Meta object code from reading C++ file 'managerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../managerdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ManagerDialog_t {
    QByteArrayData data[10];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManagerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManagerDialog_t qt_meta_stringdata_ManagerDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ManagerDialog"
QT_MOC_LITERAL(1, 14, 24), // "on_addPushButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 24), // "on_delPushButton_clicked"
QT_MOC_LITERAL(4, 65, 25), // "on_showPushButton_clicked"
QT_MOC_LITERAL(5, 91, 26), // "on_myTiccketButton_clicked"
QT_MOC_LITERAL(6, 118, 26), // "on_buyTicketButton_clicked"
QT_MOC_LITERAL(7, 145, 27), // "on_modifyInfoButton_clicked"
QT_MOC_LITERAL(8, 173, 27), // "on_showPushButton_2_clicked"
QT_MOC_LITERAL(9, 201, 24) // "on_logPushButton_clicked"

    },
    "ManagerDialog\0on_addPushButton_clicked\0"
    "\0on_delPushButton_clicked\0"
    "on_showPushButton_clicked\0"
    "on_myTiccketButton_clicked\0"
    "on_buyTicketButton_clicked\0"
    "on_modifyInfoButton_clicked\0"
    "on_showPushButton_2_clicked\0"
    "on_logPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManagerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ManagerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ManagerDialog *_t = static_cast<ManagerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addPushButton_clicked(); break;
        case 1: _t->on_delPushButton_clicked(); break;
        case 2: _t->on_showPushButton_clicked(); break;
        case 3: _t->on_myTiccketButton_clicked(); break;
        case 4: _t->on_buyTicketButton_clicked(); break;
        case 5: _t->on_modifyInfoButton_clicked(); break;
        case 6: _t->on_showPushButton_2_clicked(); break;
        case 7: _t->on_logPushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ManagerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ManagerDialog.data,
      qt_meta_data_ManagerDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ManagerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManagerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ManagerDialog.stringdata0))
        return static_cast<void*>(const_cast< ManagerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ManagerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
