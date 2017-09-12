#ifndef BUTTON_H
#define BUTTON_H
#include "widget.h"
#include "dialogdirector.h"

class Button : public Widget
{
public:
    Button(DialogDirector*);
    virtual void SetText(const char* text);
    virtual void HandleMouse(MouseEvent& event);
    ~Button();
    //...
};

#endif // BUTTON_H
