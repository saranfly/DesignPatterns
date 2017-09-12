#include "expressionnode.h"

ExpressionNode::ExpressionNode()
{

}

ExpressionNode::~ExpressionNode()
{

}

void ExpressionNode::Traverse(CodeGenerator &cg)
{
    cg.Visit(this);
    ListIterator<ProgramNode*> i(_children);

    for(i.first(); !i.IsDone(); i.Next())
    {
        i.Current()->Traverse(cg);
    }
}

