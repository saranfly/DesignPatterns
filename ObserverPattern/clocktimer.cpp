#include "clocktimer.h"

ClockTimer::ClockTimer()
{

}

ClockTimer::~ClockTimer()
{

}

void ClockTimer::Tick()
{
    //..... update internal time-keeping state
    //.....
    Notify();
}

