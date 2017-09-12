#include "broderdecorator.h"

BroderDecorator::BroderDecorator(VisualComponent *, int borderWidth)
{

}

BroderDecorator::~BroderDecorator()
{

}

void BroderDecorator::Draw()
{
    Decorator::Draw();
    DrawBorder(_width);
}

void BroderDecorator::DrawBroder(int)
{

}

