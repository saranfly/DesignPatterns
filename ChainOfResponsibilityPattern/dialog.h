#ifndef DIALOG_H
#define DIALOG_H
#include "widget.h"

class Dialog : public Widget
{
public:
    Dialog(Widget* w = NULL, Topic t = NO_HELP_TOPIC);
    virtual void HandleHelp();
    //Widget operations that Dialog overrides...
    ~Dialog();
};

#endif // DIALOG_H
