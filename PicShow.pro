# Qt modules
QT += core gui widgets

# Configuration
CONFIG += c++11
DEFINES += QT_DEPRECATED_WARNINGS
TEMPLATE = app
TARGET = picshow_exec
DESTDIR = bin

# Files
SOURCES += \
    Src/main.cpp \
    Src/mainwindow.cpp

HEADERS += \
    Src/mainwindow.h

TRANSLATIONS += \
    Lang/picshow_fr.ts \
    Lang/picshow_en.ts \
    Lang/picshow_es.ts

DISTFILES +=

RESOURCES += \
    Resources/resources.qrc
