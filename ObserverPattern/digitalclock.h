#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QWidget>
#include "observer.h"
#include "subject.h"
#include "clocktimer.h"

class DigitalClock : public QWidget, public Observer
{
    Q_OBJECT
public:
    DigitalClock(ClockTimer *s);
    virtual ~DigitalClock();
    virtual void Update(Subject *theChangedSubject);
    //overrides Observer operation

    virtual void Draw();
    //overrides Widget operation
    //defines How to Draw the diagital clock

private:
    ClockTimer *_subject;
signals:

public slots:
};

#endif // DIGITALCLOCK_H
