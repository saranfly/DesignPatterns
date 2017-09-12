#include "compositequipment.h"

CompositeEquipment::CompositeEquipment()
{

}

CompositeEquipment::~CompositeEquipment()
{

}

Currency CompositeEquipment::NetPrice()
{
    Iterator<Equipment*>* i = CreatIterator();
    Currency total = 0;
    for(i->first(); !i->IsDone(); i->Next())
    {
        total += i->CurrencyItem()->NetPrice();
    }
    delete i;
    return total;
}
