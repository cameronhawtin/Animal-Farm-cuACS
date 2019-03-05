#-------------------------------------------------
#
# Project created by QtCreator 2019-01-31T20:09:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cuACS
TEMPLATE = app

CONFIG += c++17

LIBS += -lstdc++fs

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0



SOURCES += \
        main.cpp \
        mainwindow.cpp \
    postloginstaff.cpp \
    postloginclient.cpp \
    viewanimals.cpp \
    addanimal.cpp \
    Animal.cc \
    CuacsAPI.cc \
    FileOpenException.cc \
    FileStorageManager.cc \
    PathFinder.cc \
    PersistentStorageAPI.cc \
    Serializer.cc \
    Human.cpp \
    viewclients.cpp \
    addclient.cpp \

HEADERS += \
        mainwindow.h \
    postloginstaff.h \
    postloginclient.h \
    viewanimals.h \
    addanimal.h \
    Animal.h \
    CuacsAPI.h \
    FileStorageManager.h \
    PathFinder.h \
    PersistentStorageAPI.h \
    Profile.h \
    Serializer.h \
    StorageAdapter.h \
    Human.h \
    CuacsAPI.h \
    Profile.h \
    Serializer.h \
    addclient.h \
    viewclients.h

FORMS += \
        mainwindow.ui \
    postloginstaff.ui \
    postloginclient.ui \
    viewanimals.ui \
    addanimal.ui \
    addclient.ui \
    viewclients.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    cuACS.pro

DISTFILES += \
    cuACS.pro.user \
    cuACS.pro.user.50df91b.20 \
    README \
    logo.png \
    logo.png

RESOURCES += \
    egyptfont.qrc \
    logo.qrc