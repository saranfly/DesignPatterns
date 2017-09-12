#include "subject.h"

Subject::Subject()
{

}

Subject::~Subject()
{

}

void Subject::Attach(Observer *o)
{
    _observers->insert(o);
}

void Subject::Detach(Observer *o)
{
    _observers->remove(o);
}

void Subject::Notify()
{
    list<Observer*>::iterator iter;
    for(iter = _observers->begin(); iter != _observers->end(); iter++)
    {
        (*iter)->Update(this);
    }
}

