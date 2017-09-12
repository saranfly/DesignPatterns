#ifndef WIDGET_H
#define WIDGET_H
#include "dialogdirector.h"

class Widget
{
public:
    Widget(DialogDirector*);
    virtual void Changed();
    virtual void HandleMouse(MouseEvent &event);
    virtual ~Widget();
private:
    DialogDirector* _director;
};

#endif // WIDGET_H
