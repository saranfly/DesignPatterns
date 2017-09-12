#ifndef PASTECOMMAND_H
#define PASTECOMMAND_H
#include "command.h"

class Document;
class PasteCommand : public Command
{
public:
    PasteCommand(Document* doc);
    ~PasteCommand();
    virtual void Execute();
private:
    Document* _document;
};

#endif // PASTECOMMAND_H
