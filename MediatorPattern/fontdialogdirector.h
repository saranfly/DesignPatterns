#ifndef FONTDIALOGDIRECTATOR_H
#define FONTDIALOGDIRECTATOR_H
#include "dialogdirector.h"
#include "widget.h"
#include "listbox.h"
#include "button.h"
#include "enterfield.h"

class FontDialogDirector : public DialogDirector
{
public:
    FontDialogDirector();
    virtual ~FontDialogDirector();
    virtual void WidgetChanged(Widget*);
protected:
    virtual void CreatWidgets();
private:
    Button* _ok;
    Button* _canale;
    ListBox* _fontlist;
    EnterField _fontname;
};

#endif // FONTDIALOGDIRECTATOR_H
