#ifndef LISTBOX_H
#define LISTBOX_H
#include "widget.h"
#include "dialogdirector.h"
#include <list>

using namespace std;

class ListBox : public Widget
{
public:
    ListBox(DialogDirector*);
    virtual const char* GetSelection();
    virtual void SetList(list<char*>* listItems);
    virtual void HandleMouse(MouseEvent& event);
    ~ListBox();
    //....
};

#endif // LISTBOX_H
