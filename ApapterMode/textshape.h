#ifndef TEXTSHAPE_H
#define TEXTSHAPE_H
#include "shape.h"
#include "textview.h"

class TextManipulator;

/*
* 类适配器的关键是用一个分支继承接口，而用另一个分之继承接口的实现部分。
* 通常在c++中我们使用公有方式继承接口，用私有方式继承接口的实现。
* 我们假定所用的Point, Coord, Manipulator，TextManipulator类都是已经实现了的。
*/

//类适配器
class TextShape : public Shape,private TextView
{
public:
    TextShape();
    ~TextShape();
    virtual void BonudingBox(Point &bottomLeft, Point &topRight) const;
    virtual bool IsEmpty() const;
    virtual Manipulator* CreatManipulator() const;
};


/*********************************************************************************************/
/********************************    华丽的分割线    *******************************************/
/*********************************************************************************************/


/*
 * 对象适配器代码相对麻烦，但是有更好的灵活性，例如，将一侧TextView的一个子类传给TextShape的构造函数，
 * 对象适配器版本的TextShape同样可以和TextView的子类一起很好的工作。
*/

//对象适配器
class TextShape : public Shape
{
public:
    TextShape(TextView* object);
    ~TextShape();
    virtual void BonudingBox(Point &bottomLeft, Point &topRight) const;
    virtual bool IsEmpty() const;
    virtual Manipulator* CreatManipulator() const;
private:
       TextView* _textview;
};

#endif // TEXTSHAPE_H
