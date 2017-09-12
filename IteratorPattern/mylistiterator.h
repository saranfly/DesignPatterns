#ifndef MYLISTITERATOR_H
#define MYLISTITERATOR_H
#include "myiterator.h"
#include "mylist.h"

template <class Item>
class MyListIterator : public MyIterator <Item>
{
public:
    MyListIterator(const MyList<Item>* aList);
    virtual void First();
    virtual void Next();
    virtual bool IsDone() const;
    virtual Item CurrentItem() const;
    ~MyListIterator();
private:
    const MyList<Item>* _list;
    long _current;
};

#endif // MYLISTITERATOR_H
