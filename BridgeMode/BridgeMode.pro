TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    window.cpp \
    windowimp.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    window.h \
    windowimp.h

