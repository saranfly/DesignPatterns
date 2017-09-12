#include "fontdialogdirector.h"

FontDialogDirector::FontDialogDirector()
{

}

FontDialogDirector::~FontDialogDirector()
{

}

void FontDialogDirector::WidgetChanged(Widget *theChangeWidget)
{
    if(theChangeWidget == _fontlist)
    {
        _fontname->SetText(_fontlist->GetSelection());
    }
    else if(theChangeWidget == _ok)
    {
        //apply font change and dismiss dialog
        //...
    }
    else if(theChangeWidget == _canale)
    {
        //dismiss dialog
    }
}

void FontDialogDirector::CreatWidgets()
{
    _ok = new Button(this);
    _canale = new Button(this);
    _fontlist = new ListBox(this);
    _fontname = new EnterField(this);
}

