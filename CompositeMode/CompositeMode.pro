TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    equipment.cpp \
    floppydisk.cpp \
    chassis.cpp \
    compositequipment.cpp \
    cabinet.cpp \
    bus.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    equipment.h \
    floppydisk.h \
    chassis.h \
    compositequipment.h \
    cabinet.h \
    bus.h

