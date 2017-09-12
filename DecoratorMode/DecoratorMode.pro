TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    visualcomponent.cpp \
    decorator.cpp \
    broderdecorator.cpp \
    window.cpp \
    textview.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    visualcomponent.h \
    decorator.h \
    broderdecorator.h \
    window.h \
    textview.h

