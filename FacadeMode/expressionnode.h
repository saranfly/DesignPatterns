#ifndef EXPRESSIONNODE_H
#define EXPRESSIONNODE_H
#include "programnode.h"

class ExpressionNode : public ProgramNode
{
public:
    ExpressionNode();
    ~ExpressionNode();

    virtual void Traverse(CodeGenerator& cg);
};

#endif // EXPRESSIONNODE_H
