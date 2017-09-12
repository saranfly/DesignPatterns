#ifndef COMPOSITEQUIPMENT_H
#define COMPOSITEQUIPMENT_H
#include "equipment.h"
#include <list>

using namespace std;

class CompositeEquipment : public Equipment
{
public:
    virtual ~CompositeEquipment();
    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrise();
    virtual void Add(Equipment *);
    virtual void Remove(Equipment *);
    virtual Iterator<Equipment *>* CreatIterator();
protected:
    CompositeEquipment(const char *);
private:
    list<Equipment*> _equipment;
};

#endif // COMPOSITEQUIPMENT_H
