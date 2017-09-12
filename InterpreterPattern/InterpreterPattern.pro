TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    booleanexp.cpp \
    context.cpp \
    variableexp.cpp \
    andexp.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    booleanexp.h \
    context.h \
    variableexp.h \
    andexp.h

