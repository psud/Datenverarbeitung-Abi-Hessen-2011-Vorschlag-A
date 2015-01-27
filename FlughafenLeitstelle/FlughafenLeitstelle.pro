#-------------------------------------------------
#
# Project created by QtCreator 2015-01-27T16:48:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FlughafenLeitstelle
TEMPLATE = app


SOURCES += main.cpp\
        flughafenleitstellegui.cpp \
    bahn.cpp

HEADERS  += flughafenleitstellegui.h \
    flughafenleitstelle.h \
    bahn.h \
    flugzeug.h \
    parkposition.h

FORMS    += flughafenleitstellegui.ui
