#ifndef VISUALCOMPONENT_H
#define VISUALCOMPONENT_H


class VisualComponent
{
public:
    VisualComponent();
    ~VisualComponent();
    virtual void Draw();
    virtual void Resize();
};

#endif // VISUALCOMPONENT_H
