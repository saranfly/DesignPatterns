#ifndef CHARACTER_H
#define CHARACTER_H
#include "glyph.h"

class Character : public Glyph
{
public:
    Character(char);
    ~Character();
    virtual void Draw(Window*, GlyphContext&);
private:
    char _charcode;
};

#endif // CHARACTER_H
