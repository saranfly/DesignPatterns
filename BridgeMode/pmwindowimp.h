#ifndef PMWINDOWIMP_H
#define PMWINDOWIMP_H
#include "windowimp.h"

class HPS;

class PMWindowImp : public WindowImp
{
public:
    PMWindowImp();
    ~PMWindowImp();
    virtual void DeviceRect(Coord x0, Coord y0, Coord x1, Coord y1);
    //remainder of public interface...
private:
    //lots of PM window system-specific state, including:
    HPS _hps;
};

#endif // PMWINDOWIMP_H
