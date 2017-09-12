#ifndef FLOPPYDISK_H
#define FLOPPYDISK_H
#include "equipment.h"

class FloppyDisk : public Equipment
{
public:
    FloppyDisk(const char *);
    virtual ~FloppyDisk();
    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrise();
};

#endif // FLOPPYDISK_H
