#ifndef WINDOW_H
#define WINDOW_H
#include "visualcomponent.h"
#include "decorator.h"
#include "broderdecorator.h"

class Window
{
public:
    Window(VisualComponent *);
    ~Window();
    void SetContents(VisualComponent *);
};

#endif // WINDOW_H
