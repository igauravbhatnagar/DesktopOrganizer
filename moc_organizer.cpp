/****************************************************************************
** Meta object code from reading C++ file 'organizer.h'
**
** Created: Sat Apr 24 08:41:54 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "organizer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'organizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Organizer[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      46,   27,   10,   10, 0x0a,
     103,   80,   10,   10, 0x0a,
     155,  145,   10,   10, 0x0a,
     184,  145,   10,   10, 0x0a,
     210,   10,   10,   10, 0x0a,
     226,   10,   10,   10, 0x0a,
     245,   10,   10,   10, 0x0a,
     264,   10,   10,   10, 0x0a,
     285,   10,   10,   10, 0x0a,
     306,  298,   10,   10, 0x0a,
     347,  327,   10,   10, 0x0a,
     381,  327,   10,   10, 0x0a,
     417,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Organizer[] = {
    "Organizer\0\0addNewKeyword()\0"
    "clickedItem,column\0startSearch(QTreeWidgetItem*,int)\0"
    "clickedFileItem,column\0"
    "openFileOrDirectory(QTreeWidgetItem*,int)\0"
    "menuPoint\0showKeywordsTreeMenu(QPoint)\0"
    "showFilesTreeMenu(QPoint)\0deleteKeyword()\0"
    "openSelectedFile()\0moveSelectedFile()\0"
    "deleteSelectedFile()\0newKeyword()\0"
    "checked\0showFileDialog(bool)\0"
    "selectedItem,column\0"
    "editKeyword(QTreeWidgetItem*,int)\0"
    "keywordEdited(QTreeWidgetItem*,int)\0"
    "showSettingsDialog()\0"
};

const QMetaObject Organizer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Organizer,
      qt_meta_data_Organizer, 0 }
};

const QMetaObject *Organizer::metaObject() const
{
    return &staticMetaObject;
}

void *Organizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Organizer))
        return static_cast<void*>(const_cast< Organizer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Organizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addNewKeyword(); break;
        case 1: startSearch((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: openFileOrDirectory((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: showKeywordsTreeMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: showFilesTreeMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: deleteKeyword(); break;
        case 6: openSelectedFile(); break;
        case 7: moveSelectedFile(); break;
        case 8: deleteSelectedFile(); break;
        case 9: newKeyword(); break;
        case 10: showFileDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: editKeyword((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: keywordEdited((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: showSettingsDialog(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
