#ifndef CONTEXT_H
#define CONTEXT_H
#include "variableexp.h"

class Context
{
public:
    Context();
    ~Context();
    bool Lookup(const char *) const;
    void Assign(VariableExp*, bool);
};

#endif // CONTEXT_H
