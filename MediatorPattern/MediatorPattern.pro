TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    widget.cpp \
    listbox.cpp \
    enterfield.cpp \
    button.cpp \
    fontdialogdirector.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    dialogdirector.h \
    widget.h \
    listbox.h \
    enterfield.h \
    button.h \
    fontdialogdirector.h

