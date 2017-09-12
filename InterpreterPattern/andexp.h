#ifndef ANDEXP_H
#define ANDEXP_H
#include "booleanexp.h"

class AndExp : public BooleanExp
{
public:
    AndExp(BooleanExp*op1, BooleanExp*op2);
    virtual ~AndExp();

    virtual bool Evaluate(Context &aContext);
    virtual BooleanExp* Replace(const char *name, BooleanExp &exp);
    virtual BooleanExp* Copy() const;
private:
    BooleanExp* _operand1;
    BooleanExp* _operand2;
};

#endif // ANDEXP_H
