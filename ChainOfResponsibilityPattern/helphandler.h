#ifndef HELPHANDLER_H
#define HELPHANDLER_H

typedef int Topic;
const Topic NO_HELP_TOPIC = -1;
const Topic PRINT_TOPIC = 1;
const Topic PAPER_OORIENTATION_TOPIC = 2;
const Topic APPLICATION_TOPIC = 3;

class HelpHandler
{
public:
    HelpHandler(HelpHandler* h= NULL, Topic t= NO_HELP_TOPIC);
    virtual bool HasHelp();
    virtual void SetHandler(HelpHandler*, Topic);
    virtual void HandleHelp();
    virtual ~HelpHandler();
private:
    HelpHandler* _successor;
    Topic _topic;
};

#endif // HELPHANDLER_H
