TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    helphandler.cpp \
    widget.cpp \
    button.cpp \
    dialog.cpp \
    application.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    helphandler.h \
    widget.h \
    button.h \
    dialog.h \
    application.h

