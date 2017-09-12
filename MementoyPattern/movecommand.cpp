#include "movecommand.h"

MoveCommand::MoveCommand()
{

}

MoveCommand::~MoveCommand()
{

}

void MoveCommand::Execute()
{
    ConstraintSolver *solver = ConstraintSolver::Instance();
    _state = solver->CreatMemento();
    _target->Move(_delta);
    solver->Solve();
}

void MoveCommand::UnExecute()
{
    ConstraintSolver *solver = ConstraintSolver::Instance();
    _target->Move(_delta);
    solver->SetMemento(_state);
    solver->Solve();
}

