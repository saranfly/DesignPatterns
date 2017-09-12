TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    scanner.cpp \
    parser.cpp \
    programnodebuilder.cpp \
    programnode.cpp \
    codegenerator.cpp \
    expressionnode.cpp \
    compile.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    scanner.h \
    parser.h \
    programnodebuilder.h \
    programnode.h \
    codegenerator.h \
    expressionnode.h \
    compile.h

