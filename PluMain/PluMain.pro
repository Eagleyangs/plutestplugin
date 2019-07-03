#-------------------------------------------------
#
# Project created by QtCreator 2019-06-03T11:16:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PluMain
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        plumain.cpp

HEADERS  += plumain.h

FORMS    += plumain.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Qt/Qt5.8.0_32/5.8/msvc2013/plugins/designer/ -lplutestplugin
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Qt/Qt5.8.0_32/5.8/msvc2013/plugins/designer/ -lplutestplugind
else:unix: LIBS += -L$$PWD/../../../Qt/Qt5.8.0_32/5.8/msvc2013/plugins/designer/ -lplutestplugin

INCLUDEPATH += $$PWD/../../../Qt/Qt5.8.0_32/5.8/msvc2013/plugins/designer
DEPENDPATH += $$PWD/../../../Qt/Qt5.8.0_32/5.8/msvc2013/plugins/designer
