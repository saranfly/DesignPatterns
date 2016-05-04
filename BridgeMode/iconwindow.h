#ifndef ICONWINDOW_H
#define ICONWINDOW_H
#include "window.h"

class IconWindow : public Window
{
public:
    IconWindow();
    ~IconWindow();
    virtual void DrawContents();
private:
    const char *_bitmapName;
};

#endif // ICONWINDOW_H
