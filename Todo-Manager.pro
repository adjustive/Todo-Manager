#-------------------------------------------------
#
# Project created by QtCreator 2014-02-02T19:12:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Todo-Manager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Classes/Task.cpp \
    Classes/Category.cpp

HEADERS  += mainwindow.h \
    Classes/Task.h \
    Classes/Category.h

FORMS    += mainwindow.ui
