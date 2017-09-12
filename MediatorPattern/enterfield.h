#ifndef ENTERFIELD_H
#define ENTERFIELD_H
#include "widget.h"
#include "dialogdirector.h"

class EnterField : public Widget
{
public:
    EnterField(DialogDirector*);
    virtual void SetText(const char* text);
    virtual const char* GetText();
    virtual void HandleMouse(MouseEvent& event);
    ~EnterField();
    //...
};

#endif // ENTERFIELD_H
