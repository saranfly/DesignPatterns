#ifndef OPENCOMMAND_H
#define OPENCOMMAND_H
#include "command.h"

class Application;
class Document;

class OpenCommand : public Command
{
public:
    OpenCommand(Application*);
    virtual void Execute();
    ~OpenCommand();
protected:
    virtual const char* AskUser();
private:
    Application* _application;
    char* _response;
};

#endif // OPENCOMMAND_H
