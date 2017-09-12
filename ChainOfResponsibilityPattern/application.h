#ifndef APPLICATION_H
#define APPLICATION_H
#include "helphandler.h"

class Application : public HelpHandler
{
public:
    Application(Topic t): HelpHandler(0 , t);
    virtual void HandleHelp();
    //application-specific operations...
    ~Application();
};

#endif // APPLICATION_H
