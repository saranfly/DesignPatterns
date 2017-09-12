#ifndef CONSTRAINTSOLVERMEMENTO_H
#define CONSTRAINTSOLVERMEMENTO_H
#include "constraintsolver.h"

class ConstraintSolverMemento
{
public:
    virtual ~ConstraintSolverMemento();
private:
    friend class ConstraintSolver;
    ConstraintSolverMemento();
};

#endif // CONSTRAINTSOLVERMEMENTO_H
