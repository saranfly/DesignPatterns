TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    window.cpp \
    windowimp.cpp \
    applicationwindow.cpp \
    iconwindow.cpp \
    xwindowimp.cpp \
    pmwindowimp.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    window.h \
    windowimp.h \
    applicationwindow.h \
    iconwindow.h \
    xwindowimp.h \
    pmwindowimp.h

