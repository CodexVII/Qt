#-------------------------------------------------
#
# Project created by QtCreator 2017-01-10T13:37:53
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NetworkTutorial
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mynetworkclass.cpp

HEADERS  += mainwindow.h \
    mynetworkclass.h

FORMS    += mainwindow.ui
