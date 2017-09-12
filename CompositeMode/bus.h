#ifndef BUS_H
#define BUS_H
#include "compositequipment.h"

class Bus : public CompositeEquipment
{
public:
    Bus();
    virtual ~Bus();
    virtual Watt power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrise();
};

#endif // BUS_H
