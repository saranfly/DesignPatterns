#ifndef GLYPHCONTEXT_H
#define GLYPHCONTEXT_H


class GlyphContext
{
public:
    GlyphContext();
    ~GlyphContext();
    virtual void Next(int setp = 1);
    virtual void Insert(int quantity = 1);
    virtual Font* GetFont();
    virtual void SetFont(Font*, int span = 1);
private:
    int _index;
    BTree* _fonts;
};

#endif // GLYPHCONTEXT_H
