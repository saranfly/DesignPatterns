#include "window.h"

Window::Window(View* contents)
{

}

Window::~Window()
{

}

void Window::DrawRect(const Point &p1, const Point &p2)
{
   WindowImp *imp = GetWindowImp();
   imp->DeviceRect(p1.x(), p1.y(), p2.x(), p2.y());
}

