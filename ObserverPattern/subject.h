#ifndef SUBJECT_H
#define SUBJECT_H
#include "observer.h"
#include <list>

using namespace std;

class Subject
{
public:
    virtual ~Subject();
    virtual void Attach(Observer *o);
    virtual void Detach(Observer *o);
    virtual void Notify();
protected:
    Subject();
private:
    list<Observer*> *_observers;
};

#endif // SUBJECT_H
