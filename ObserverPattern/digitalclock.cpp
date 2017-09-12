#include "digitalclock.h"

DigitalClock::DigitalClock(ClockTimer *s) : QWidget(s)
{
    _subject = s;
    _subject->Attach(this);
}

DigitalClock::~DigitalClock()
{
    _subject->Detach();
}

void DigitalClock::Update(Subject *theChangedSubject)
{
    if(theChangedSubject == _subject)
    {
        Draw();
    }
}

void DigitalClock::Draw()
{
    //get the new values from the subject
    int hour  = _subject->GetHour();
    int minute = _subject->GetMinute();
    //etc.

    //draw the digital clock
}

