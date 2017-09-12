#ifndef CHASSIS_H
#define CHASSIS_H
#include "compositequipment.h"

class Chassis : public CompositeEquipment
{
public:
    Chassis(const char *);
    voitual ~Chassis();
    virtual Watt power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrise();
};

#endif // CHASSIS_H
