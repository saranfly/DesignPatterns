#ifndef PROGRAMNODEBUILDER_H
#define PROGRAMNODEBUILDER_H
#include "programnode.h"

class ProgramNodeBuilder
{
public:
    ProgramNodeBuilder();
    ~ProgramNodeBuilder();
    virtual ProgramNode* NewVariable(const char* variableName) const;
    virtual ProgramNode* NewAssignment(ProgramNode* variable, ProgramNode* expression) const;
    virtual ProgramNode* NewReturnStatement(ProgramNode* vale) const;
    virtual ProgramNode* NewCondition(ProgramNode* condition, ProgramNode* tureParrt, ProgramNode* falsePart) const;

    ProGramNode * GetRootNode();
private:
    ProgramNode* _node();
};

#endif // PROGRAMNODEBUILDER_H
