#ifndef WINDOW_H
#define WINDOW_H
#include "windowimp.h"

class View;

class Window
{
public:
    Window(View* contents);
    ~Window();
    //requests handled by window
    virtual void DrawContents();

    virtual void Open();
    virtual void Close();
    virtual void Iconify();
    virtual void Deiconify();

    //requests forwarded to implementation
    virtual void SetOrigin(const Point& at);
    virtual void SetExtent(const Point& extent);
    virtual void Raise();
    virtual void Lower();
    virtual void DrawLine(const Point&, const Point&);
    virtual void DrawRect(const Point &p1, const Point &p2);
    virtual void DrawPolygon(const Point[], int n);
    virtual void DrawText(const char*, const Point&);

protected:
    WindowImp* GetWindowImp();
    View* GetView();

private:
    WindowImp* _imp;
    View* _contents;    //the window's contents
};

#endif // WINDOW_H
