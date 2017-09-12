#ifndef CABINET_H
#define CABINET_H
#include "compositequipment.h"

class Cabinet : public CompositeEquipment
{
public:
    Cabinet();
    virtual ~Cabinet();
    virtual Watt power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrise();
};

#endif // CABINET_H
