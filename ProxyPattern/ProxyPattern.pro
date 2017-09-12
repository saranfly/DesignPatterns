TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    graphic.cpp \
    image.cpp \
    imageproxy.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    graphic.h \
    image.h \
    imageproxy.h

