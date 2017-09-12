#ifndef PARSER_H
#define PARSER_H
#include "programnodebuilder.h"

class Parser
{
public:
    Parser();
    virtual ~Parser();

    virtual void Parse(Sanner&, ProgramNodeBuilder&);
};

#endif // PARSER_H
