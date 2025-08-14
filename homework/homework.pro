QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    menubar/filemenu.cpp \
    menubar/editmenu.cpp \
    menubar/viewmenu.cpp \
    toolbar/navigationbar.cpp \
    centralwidget/centralsplitter.cpp \
    centralwidget/viewarea.cpp \
    centralwidget/propertyarea.cpp \
    centralwidget/textarea.cpp \
    statusbar/statusbar.cpp \
    centralwidget/viewarea.cpp \
    centralwidget/propertyarea.cpp \
    centralwidget/textarea.cpp

HEADERS += \
    mainwindow.h \
    menubar/filemenu.h \
    menubar/editmenu.h \
    menubar/viewmenu.h \
    toolbar/navigationbar.h \
    centralwidget/centralsplitter.h \
    centralwidget/viewarea.h \
    centralwidget/propertyarea.h \
    centralwidget/textarea.h \
    statusbar/statusbar.h \
    centralwidget/viewarea.h \
    centralwidget/propertyarea.h \
    centralwidget/textarea.h

FORMS += \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
