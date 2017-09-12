#ifndef CONSTRAINTSOLVER_H
#define CONSTRAINTSOLVER_H
#include "constraintsolvermemento.h"

class Graphic;

class ConstraintSolver
{
public:
    ConstraintSolver();
    ~ConstraintSolver();
    static ConstraintSolver* Instance();
    void Solve();
    void AddConstraint(Graphic *startConnection, Graphic *endConnection);
    void RemoveConstraint(Graphic *startConnention, Graphic *endConnention);
    ConstraintSolverMemento *CreatMemento();
    void SetMemento(ConstraintSolverMemento *);
private:
    //....
};

#endif // CONSTRAINTSOLVER_H
