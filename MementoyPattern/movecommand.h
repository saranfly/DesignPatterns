#ifndef MOVECOMMAND_H
#define MOVECOMMAND_H
#include "constraintsolvermemento.h"
#include "constraintsolver.h"

class Graphic;
class Point;

class MoveCommand
{
public:
    MoveCommand(Graphic *target, const Point& delta);
    ~MoveCommand();
    void Execute();
    void UnExecute();
private:
    ConstraintSolverMemento* _state;
    Point _delta;
    Graphic *_target;
};

#endif // MOVECOMMAND_H
