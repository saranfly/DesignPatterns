#ifndef DIALOGDIRECTOR_H
#define DIALOGDIRECTOR_H


class DialogDirector
{
protected:
    DialogDirector();
    virtual void CreatWidgets() = 0;
public:
    virtual ~DialogDirector();
    virtual void ShowDialog();
    virtual void WidgetChanged(Widget*) = 0;
};

#endif // DIALOGDIRECTOR_H
