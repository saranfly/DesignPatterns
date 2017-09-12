#ifndef MYITERATORPTR_H
#define MYITERATORPTR_H
#include "mylistiterator.h"

template <class Item>
class MyIteratorPtr
{
public:
    MyIteratorPtr(MyIterator<Item>* i) : _i(i){}
    ~MyIteratorPtr() { delete _i; }
    MyIteratorPtr<Item>* operator->() { return _i; }
    MyIteratorPtr<Item>* operator*() { return *_i; }
private:
    MyIteratorPtr(const MyIterator&);
    MyIteratorPtr& operator= (const MyIteratorPtr&);
private:
    MyIterator<Item>* _i;
};

#endif // MYITERATORPTR_H
