TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    ../Array.cpp \
    ../main.cpp

HEADERS += \
    ../Array.h

