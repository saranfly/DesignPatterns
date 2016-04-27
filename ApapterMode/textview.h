#ifndef TEXTVIEW_H
#define TEXTVIEW_H

/*
 * 该类为适配器提供实现，假定Coord类是已经实现的。
*/

class Coord;

class TextView
{
public:
    TextView();
    ~TextView();
    void GetOrigin(Coord &x,Coord &y) const;
    void GetExtent(Coord &width, Coord &height) const;
    virtual bool IsEmpty() const;
};

#endif // TEXTVIEW_H
