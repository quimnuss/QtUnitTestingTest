#-------------------------------------------------
#
# Project created by QtCreator 2017-01-06T17:03:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelloWorld
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

include(helloworldCommon.pri)

FORMS    += mainwindow.ui
