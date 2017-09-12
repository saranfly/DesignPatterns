TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    originator.cpp \
    memento.cpp \
    movecommand.cpp \
    constraintsolver.cpp \
    constraintsolvermemento.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    originator.h \
    memento.h \
    movecommand.h \
    constraintsolver.h \
    constraintsolvermemento.h

