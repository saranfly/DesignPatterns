#ifndef WINDOWIMP_H
#define WINDOWIMP_H

class Point;
class Coord;

class WindowImp
{
public:
    virtual void ImpTop() = 0;
    virtual void ImpBottom() = 0;
    virtual void ImpSetExtent(const Point&) = 0;
    virtual void ImpSerOrigin(const Point&) = 0;
    virtual void DeviceRect(Coord, Coord, Coord, Coord) = 0;
    virtual void DeviceText(const char*, Coord, Coord) = 0;
    virtual void DeviceBitmap(const char*, Coord, Coord) = 0;
    //lost more function for drawing on windows...
protected:
    WindowImp();
    ~WindowImp();
};

#endif // WINDOWIMP_H
