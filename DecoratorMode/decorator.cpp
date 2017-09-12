#include "decorator.h"

Decorator::Decorator(VirsualComponent *)
{

}

Decorator::~Decorator()
{

}

void Decorator::Draw()
{
    _component->Draw();
}

void Decorator::Resize()
{
    _component->Resize();
}

