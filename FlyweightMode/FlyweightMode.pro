TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    glyph.cpp \
    character.cpp \
    glyphcontext.cpp \
    glyphfactory.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    glyph.h \
    character.h \
    glyphcontext.h \
    glyphfactory.h

