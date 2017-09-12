TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    command.cpp \
    opencommand.cpp \
    pastecommand.cpp \
    simplecommand.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    command.h \
    opencommand.h \
    pastecommand.h \
    simplecommand.h

