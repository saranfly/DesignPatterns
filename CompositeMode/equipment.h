#ifndef EQUIPMENT_H
#define EQUIPMENT_H

class Currency;
class Watt;

class Equipment
{
public:
    Equipment();
    virtual ~Equipment();
    const char* Name() {return _name;}
    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrise();
    virtual void Add(Equipment *);
    virtual void Remove(Equipment *);
    virtual Iterator<Equipment *>* CreatIterator();
protected:
    Equipment(const char*);
private:
    const char* _name;
};

#endif // EQUIPMENT_H
