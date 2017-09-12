TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    mylist.cpp \
    myiterator.cpp \
    mylistiterator.cpp \
    process.cpp \
    myiteratorptr.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    mylist.h \
    myiterator.h \
    mylistiterator.h \
    process.h \
    myiteratorptr.h

