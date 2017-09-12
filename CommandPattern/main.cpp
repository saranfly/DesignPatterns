#include <iostream>
#include "command.h"
#include "simplecommand.h"

using namespace std;
class Myclass;
int main()
{
    Myclass* receiver = new Myclass();
    Command aSimpleCommand = new SimpleCommand<Myclass>(receiver, &Myclass::Action);
    aSimpleCommand->Execute();
    return 0;
}

