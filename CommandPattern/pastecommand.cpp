#include "pastecommand.h"

PasteCommand::PasteCommand(Document *doc)
{
    _document = doc;
}

PasteCommand::~PasteCommand()
{

}

void PasteCommand::Execute()
{
    _document->Paste();
}

