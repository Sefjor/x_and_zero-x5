#-------------------------------------------------
#
# Project created by QtCreator 2015-09-24T03:57:02
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = x_and_zero
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cell.cpp \
    field.cpp \
    ai.cpp

HEADERS  += mainwindow.h \
    cell.h \
    figure_enum_class.h \
    field_size.h \
    field.h \
    ai.h

FORMS    += mainwindow.ui
