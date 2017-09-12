#include "button.h"

Button::Button(Widget *d, Topic t)
    :Widget(d, t)
{

}

Button::~Button()
{

}

void Button::HandlerHelp()
{
    if(HasHelp())
    {
        //off help on the button
    }
    else
    {
        HelpHandler::HandleHelp();
    }
}


