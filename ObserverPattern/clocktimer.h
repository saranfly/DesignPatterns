#ifndef CLOCKTIMER_H
#define CLOCKTIMER_H
#include "subject.h"

class ClockTimer : public Subject
{
public:
    ClockTimer();
    ~ClockTimer();

    virtual int GetHour();
    virtual int GetMinute();
    virtual int GetSecond();

    void Tick();
};

#endif // CLOCKTIMER_H
