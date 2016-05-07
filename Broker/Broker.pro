#-------------------------------------------------
#
# Project created by QtCreator 2016-05-07T13:49:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Broker
TEMPLATE = app


SOURCES += main.cpp\
        mainwindows.cpp \
    login.cpp \
    utilits.cpp \
    autenticate.cpp \
    cliente.cpp

HEADERS  += mainwindows.h \
    login.h \
    utilits.h \
    autenticate.h \
    cliente.h

FORMS    += mainwindows.ui \
    login.ui
