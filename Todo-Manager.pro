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
    Classes/Task.cpp \
    Classes/Category.cpp \
    Windows/edittask.cpp \
    Classes/taskconnector.cpp \
    Windows/mainwindow.cpp

HEADERS  += \
    Classes/Task.h \
    Classes/Category.h \
    Windows/edittask.h \
    Windows/mainwindow.h \
    Classes/taskconnector.h

FORMS    += \
    Windows/mainwindow.ui \
    Windows/edittask.ui
