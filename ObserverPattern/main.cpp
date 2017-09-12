#include <iostream>
#include "digitalclock.h"

using namespace std;

int main()
{
    ClockTimer *timer = new ClockTimer();
    DigitalClock *digitalClock = new DigitalClock(timer);

    return 0;
}

