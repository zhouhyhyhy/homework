/****************************************************************************
** Meta object code from reading C++ file 'filemenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../homework/menubar/filemenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filemenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileMenu_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileMenu_t qt_meta_stringdata_FileMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FileMenu"
QT_MOC_LITERAL(1, 9, 12), // "newRequested"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "openRequested"
QT_MOC_LITERAL(4, 37, 13), // "saveRequested"
QT_MOC_LITERAL(5, 51, 13) // "exitRequested"

    },
    "FileMenu\0newRequested\0\0openRequested\0"
    "saveRequested\0exitRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileMenu *_t = static_cast<FileMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newRequested(); break;
        case 1: _t->openRequested(); break;
        case 2: _t->saveRequested(); break;
        case 3: _t->exitRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileMenu::newRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FileMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileMenu::openRequested)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FileMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileMenu::saveRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FileMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileMenu::exitRequested)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FileMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_FileMenu.data,
      qt_meta_data_FileMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileMenu.stringdata0))
        return static_cast<void*>(const_cast< FileMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int FileMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FileMenu::newRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void FileMenu::openRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void FileMenu::saveRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void FileMenu::exitRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
