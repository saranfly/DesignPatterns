#include "process.h"

void PrintEmployees(MyListIterator<Employee*>& i)
{
    for(i.First(); !i.IsDone(); i.Next())
    {
        i.CurrentItem()->Printf();
    }
}
