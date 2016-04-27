#ifndef SHAPE_H
#define SHAPE_H

/*
 * 该类提供适配器的方法。假定Point, Manipulator类都是已经实现的
*/


class Point;
class Manipulator;

class Shape
{
public:
    Shape();
    ~Shape();
    virtual void BoundingBox(Point &bottomLeft, Point &topRight) const;
    virtual Manipulator* CreatManipulator() const;
};

#endif // SHAPE_H
