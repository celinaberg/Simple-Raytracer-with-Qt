/****************************************************************************
** Meta object code from reading C++ file 'renderwindow.h'
**
** Created: Sat 10. Sep 17:17:36 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../renderwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'renderwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RenderWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      21,   13,   13,   13, 0x0a,
      30,   13,   13,   13, 0x0a,
      46,   38,   13,   13, 0x0a,
      81,   75,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RenderWindow[] = {
    "RenderWindow\0\0exit()\0render()\0about()\0"
    "partial\0displayPartialImage(QImage*)\0"
    "final\0renderingFinished(QImage*)\0"
};

const QMetaObject RenderWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RenderWindow,
      qt_meta_data_RenderWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RenderWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RenderWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RenderWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RenderWindow))
        return static_cast<void*>(const_cast< RenderWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RenderWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: exit(); break;
        case 1: render(); break;
        case 2: about(); break;
        case 3: displayPartialImage((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 4: renderingFinished((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
