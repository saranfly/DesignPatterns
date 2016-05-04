#ifndef XWINDOWIMP_H
#define XWINDOWIMP_H
#include "windowimp.h"

class Display;
class Drawable;
class GC;

class XWindowImp : public WindowImp
{
public:
    XWindowImp();
    ~XWindowImp();
    virtual void DeviceRect(Coord x0, Coord y0, Coord x1, Coord y1);
    //remainder of puclic interface...
private:
    //lost of X window system-specific state, including:
    Display *_dpy;
    Drawable _winid;  //window id
    GC _gc;           //window graphic context
};

#endif // XWINDOWIMP_H
