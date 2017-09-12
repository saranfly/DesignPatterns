#ifndef WIDGET_H
#define WIDGET_H
#include "helphandler.h"

class Widget : public HelpHandle
{
public:
    Widget(Widget* parent = NULL, Topic t = NO_HELP_TOPIC);
    ~Widget();
private:
    Widget* _parent;
};

#endif // WIDGET_H
