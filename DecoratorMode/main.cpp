#include <iostream>
#include "window.h"
#include "textview.h"

using namespace std;

int main()
{
    Window *pwindow = new Window();
    TextView *ptextView = new TextView();
    pwindow->SetContents(ptextView);  //1

    pwindow->SetContents(new BroderDecorator(ptextView)); //2
    return 0;
}

