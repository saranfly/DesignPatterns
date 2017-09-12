#include "dialog.h"

Dialog::Dialog(Widget* w, Topic t)
    :Widget(w)
{
    SetHelpHandler(w, t);
}

void Dialog::HandleHelp()
{
    if(HasHelp())
    {
        //offer help on the dialog
    }
    else
    {
        HelpHandler::HandleHelp();
    }
}

Dialog::~Dialog()
{

}

