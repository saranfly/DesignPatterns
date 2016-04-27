TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    shape.cpp \
    textview.cpp \
    textshape.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    shape.h \
    textview.h \
    textshape.h

