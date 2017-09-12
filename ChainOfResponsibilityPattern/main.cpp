#include <iostream>
#include "button.h"
#include "application.h"
#include "dialog.h"

using namespace std;

int main()
{
    Application* applicition = new Application(APPLICATION_TOPIC);
    Dialog* dialog = new Dialog(applicition, PRINT_TOPIC);
    Button* button = new Button(dialog, PAPER_OORIENTATION_TOPIC);
    button->HandlerHelp();
    return 0;
}

