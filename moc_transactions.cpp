/****************************************************************************
** Meta object code from reading C++ file 'transactions.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ATM/transactions.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_transactions_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[30];
    char stringdata4[31];
    char stringdata5[34];
    char stringdata6[34];
    char stringdata7[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_transactions_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_transactions_t qt_meta_stringdata_transactions = {
    {
        QT_MOC_LITERAL(0, 12),  // "transactions"
        QT_MOC_LITERAL(13, 26),  // "on_pushButtonclear_clicked"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 29),  // "on_pushButton_deposit_clicked"
        QT_MOC_LITERAL(71, 30),  // "on_pushButton_withdraw_clicked"
        QT_MOC_LITERAL(102, 33),  // "on_pushButton_showhistory_cli..."
        QT_MOC_LITERAL(136, 33),  // "on_pushButton_hidehistory_cli..."
        QT_MOC_LITERAL(170, 26)   // "on_pushButton_back_clicked"
    },
    "transactions",
    "on_pushButtonclear_clicked",
    "",
    "on_pushButton_deposit_clicked",
    "on_pushButton_withdraw_clicked",
    "on_pushButton_showhistory_clicked",
    "on_pushButton_hidehistory_clicked",
    "on_pushButton_back_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_transactions[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject transactions::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_transactions.offsetsAndSizes,
    qt_meta_data_transactions,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_transactions_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<transactions, std::true_type>,
        // method 'on_pushButtonclear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_deposit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_withdraw_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showhistory_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_hidehistory_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void transactions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<transactions *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButtonclear_clicked(); break;
        case 1: _t->on_pushButton_deposit_clicked(); break;
        case 2: _t->on_pushButton_withdraw_clicked(); break;
        case 3: _t->on_pushButton_showhistory_clicked(); break;
        case 4: _t->on_pushButton_hidehistory_clicked(); break;
        case 5: _t->on_pushButton_back_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *transactions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *transactions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_transactions.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int transactions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
