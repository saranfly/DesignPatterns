#include "opencommand.h"

OpenCommand::OpenCommand(Application *a)
{
    _application = a;
}

void OpenCommand::Execute()
{
    const char* name = AskUser();
    if(name != NULL)
    {
        Document* document = new Document(name);
        _application->Add(document);
        document->Open();
    }
}

OpenCommand::~OpenCommand()
{

}

