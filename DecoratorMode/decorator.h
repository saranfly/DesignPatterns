#ifndef DECORATOR_H
#define DECORATOR_H
#include "visualcomponent.h"

class Decorator : public VisualComponent
{
public:
    Decorator(VisualComponent*);
    ~Decorator();
    virtual void Draw();
    virtual void Resize();
private:
    VisualComponent* _component;
};

#endif // DECORATOR_H
