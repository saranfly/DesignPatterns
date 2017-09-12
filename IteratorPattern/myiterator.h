#ifndef MYITERATOR_H
#define MYITERATOR_H

template <class Item>
class MyIterator
{
public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual Item CurrentItem() const = 0;
protected:
    MyIterator();
    ~MyIterator();
};

#endif // MYITERATOR_H
