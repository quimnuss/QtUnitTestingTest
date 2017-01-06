#-------------------------------------------------
#
# Project created by QtCreator 2017-01-06T17:07:33
#
#-------------------------------------------------

QT       += widgets network testlib

TARGET = tst_someunittesttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += $$PWD/../HelloWorld

include($$PWD/../HelloWorld/helloworldCommon.pri)


SOURCES += tst_someunittesttest.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"
