#include "andexp.h"

AndExp::AndExp()
{

}

AndExp::AndExp(BooleanExp *op1, BooleanExp *op2)
{
    _operand1 = op1;
    _operand2 = op2;
}

AndExp::~AndExp()
{

}

bool AndExp::Evaluate(Context &aContext)
{
    return _operand1->Evaluate(aContext) &&
            _operand2->Evaluate(aContext);
}

BooleanExp *AndExp::Copy() const
{
    return new AndExp(_operand1->Copy(), _operand2->Copy());
}

