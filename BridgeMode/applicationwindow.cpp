#include "applicationwindow.h"

ApplicationWindow::ApplicationWindow()
{

}

ApplicationWindow::~ApplicationWindow()
{

}

void ApplicationWindow::DrawContents()
{
    GetView()->DrawOn(this);
}

