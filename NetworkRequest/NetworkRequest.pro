#-------------------------------------------------
#
# Project created by QtCreator 2017-01-12T08:35:10
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NetworkRequest
TEMPLATE = app


SOURCES += main.cpp\
        apiform.cpp \
    createuserrequest.cpp \
    updatepasswordform.cpp \
    deleteuserform.cpp \
    paymentform.cpp \
    getsingleuserform.cpp \
    multipleusersearchform.cpp \
    loginform.cpp \
    loginwindow.cpp

HEADERS  += apiform.h \
    createuserrequest.h \
    updatepasswordform.h \
    deleteuserform.h \
    paymentform.h \
    getsingleuserform.h \
    multipleusersearchform.h \
    loginform.h \
    loginwindow.h

FORMS    += apiform.ui \
    loginwindow.ui

RC_FILE = appicon.rc
