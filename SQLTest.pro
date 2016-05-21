#-------------------------------------------------
#
# Project created by QtCreator 2016-04-12T21:54:38
#
#-------------------------------------------------

QT       += core
QT       += sql

QT       -= gui

TARGET = SQLTest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

#INCLUDEPATH+=/usr/include/mysql

#LIBS+=-L/usr/lib/mysql

SOURCES += main.cpp

HEADERS += \
    GVAR.h \
    ../../../usr/include/qt5/QtSql/QSqlDatabase

OTHER_FILES +=
