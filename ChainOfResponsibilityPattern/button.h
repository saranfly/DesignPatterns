#ifndef BUTTON_H
#define BUTTON_H
#include "widget.h"

class Button : public Widget
{
public:
    Button(Widget* d, Topic t = NO_HELP_TOPIC);
    ~Button();
    virtual void HandlerHelp();
    //Widget operations that Button overrides...
};

#endif // BUTTON_H
