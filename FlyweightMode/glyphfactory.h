#ifndef GLYPHFACTORY_H
#define GLYPHFACTORY_H
#include "character.h"

const int NCHARCODES = 128;

class GlyphFactory
{
public:
    GlyphFactory();
    ~GlyphFactory();
    virtual Character* CreateCharacter(char c);
    virtual Row* CreateRow();
    virtual Column* CreateColumn();
private:
    Character* _character[NCHARCODES];
};

#endif // GLYPHFACTORY_H
