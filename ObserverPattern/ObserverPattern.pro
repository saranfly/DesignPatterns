TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    subject.cpp \
    observer.cpp \
    clocktimer.cpp \
    digitalclock.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    subject.h \
    observer.h \
    clocktimer.h \
    digitalclock.h

