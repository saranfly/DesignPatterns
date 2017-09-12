#ifndef ORIGINATOR_H
#define ORIGINATOR_H

class State;
class Memento;

class Originator
{
public:
    Originator();
    ~Originator();
    Memento *CreatMemento();
    void SetMemento(const Memento*);
private:
    State *_state;
};

#endif // ORIGINATOR_H
