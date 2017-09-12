#include "simplecommand.h"

SimpleCommand::SimpleCommand()
{

}

template <class Receiver>
void SimpleCommand<Receiver>::Execute()
{
    (_receiver->*_action)();
}

SimpleCommand::~SimpleCommand()
{

}

