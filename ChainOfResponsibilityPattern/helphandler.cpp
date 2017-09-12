#include "helphandler.h"

HelpHandler::HelpHandler(HelpHandler *h, Topic t):_successor(h), _topic(t)
{

}

bool HelpHandler::HasHelp()
{
    return _topic != NO_HELP_TOPIC;
}

void HelpHandler::HandleHelp()
{
    if(_successor != NULL)
    {
        _successor->HandleHelp();
    }
}

HelpHandler::~HelpHandler()
{

}

