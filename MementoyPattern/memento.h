#ifndef MEMENTO_H
#define MEMENTO_H
#include "originator.h"

class Memento
{
public:
    virtual ~Memento();
private:
    friend class Originator;
    Memento();
    void SetState(State*);
    State* GetState();
private:
    State* _state;
};

#endif // MEMENTO_H
