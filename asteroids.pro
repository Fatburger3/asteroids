#-------------------------------------------------
#
# Project created by QtCreator 2015-04-08T09:48:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = asteroids
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    scene.cpp \
    ship.cpp

HEADERS  += mainwindow.h \
    scene.h \
    ship.h

FORMS    += mainwindow.ui
