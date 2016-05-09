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

WindowImp *Window::GetWindowImp()
{
    if(0 == _imp)
    {
        //抽象工厂，简化起见，将工厂创建为一个单例
        _imp = WindowSystemFactory::Instance()->MakeWindowImp;
    }
    return _imp;
}

