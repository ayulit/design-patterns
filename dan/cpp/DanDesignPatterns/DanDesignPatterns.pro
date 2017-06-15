
# indicate what libraries (Qt modules) are being used in this project
QT += core
QT -= gui

CONFIG += c++11

#  the name of the app or the library
TARGET = DanDesignPatterns
CONFIG += console
CONFIG -= app_bundle

# describes the type to build. It can be an application, a library, or simply subdirectories
TEMPLATE = app

SOURCES += main.cpp \
    printerdefault.cpp \
    word.cpp \
    sign.cpp \
    text.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    iprinter.h \
    printerdefault.h \
    iprintable.h \
    word.h \
    sign.h \
    text.h
