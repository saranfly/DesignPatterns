#include "iconwindow.h"

IconWindow::IconWindow()
{

}

IconWindow::~IconWindow()
{

}

void IconWindow::DrawContents()
{
    WindowImp *imp = GetWindowImp();
    if(imp != NULL)
    {
        imp->DeviceBitmap(_bitmapName, 0.0, 0.0);
    }
}

