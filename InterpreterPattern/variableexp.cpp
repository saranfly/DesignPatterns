#include "variableexp.h"

VariableExp::VariableExp(const char *)
{
    _name = strdup(name);
}

VariableExp::~VariableExp()
{

}

bool VariableExp::Evaluate(Context &aContext)
{
    return aContext.Lookup(_name);
}

BooleanExp *VariableExp::Replace(const char *name, BooleanExp &exp)
{
    if(0 == strcmp(name, _name))
    {
        return exp.Copy();
    }
    else
    {
        return new VariableExp(_name);
    }
}

BooleanExp *VariableExp::Copy() const
{
    return new VariableExp(_name);
}

