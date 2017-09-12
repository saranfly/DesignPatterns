#include "widget.h"

Widget::Widget()
{

}

void Widget::Changed()
{
    _director->WidgetChanged(this);
}

Widget::~Widget()
{

}

