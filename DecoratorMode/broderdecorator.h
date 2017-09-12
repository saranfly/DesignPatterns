#ifndef BRODERDECORATOR_H
#define BRODERDECORATOR_H
#include "decorator.h"

class BroderDecorator : public Decorator
{
public:
    BroderDecorator(VisualComponent*, int borderWidth);
    ~BroderDecorator();
    virtual void Draw();
private:
    void DrawBroder(int);
private:
    int _width;
};

#endif // BRODERDECORATOR_H
