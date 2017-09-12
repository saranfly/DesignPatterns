#include "mylistiterator.h"

template <class Item>
MyListIterator<Item>::MyListIterator(const MyList<Item> *aList) : _list(aList), _current(0)
{

}

template <class Item>
void MyListIterator<Item>::First()
{
    _current = 0;
}

template <class Item>
void MyListIterator<Item>::Next()
{
    _current++;
}

template <class Item>
bool MyListIterator<Item>::IsDone() const
{
    return _current >= _list->Count();
}

template <class Item>
Item MyListIterator<Item>::CurrentItem() const
{
    if(IsDone())
    {
        throw IteratorOutOfBounds;
    }
    return _list->Get(_current);
}

MyListIterator::~MyListIterator()
{

}

