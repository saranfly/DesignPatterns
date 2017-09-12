#ifndef MYLIST_H
#define MYLIST_H

#define DEFAULT_LIST_CAPACITY 64

template <class Item>
class MyList
{
public:
    MyList(long size = DEFAULT_LIST_CAPACITY);
    ~MyList();
    long Count() const;
    Item& Get(long index) const;
};

#endif // MYLIST_H
