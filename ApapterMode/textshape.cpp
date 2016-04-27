#include "textshape.h"

TextShape::TextShape()
{

}

TextShape::~TextShape()
{

}

//类适配器方式
void TextShape::BonudingBox(Point &bottomLeft, Point &topRight) const
{
    Coord bottom, left, width, height;
    GetOrigin(bottom, left);
    GetExtent(width, height);

    bottomLeft = Point(bottom, left);
    topRight = Point(bottom + height, left + width);
}

bool TextShape::IsEmpty() const
{
    return TextView::IsEmpty();
}

Manipulator *TextShape::CreatManipulator() const
{
    return new TextManipulator(this);
}


/*********************************************************************************************/
/********************************    华丽的分割线    *******************************************/
/*********************************************************************************************/

TextShape::TextShape(TextView* object)
{
    _textview = object;
}

TextShape::~TextShape()
{

}

//对象适配器方式
void TextShape::BonudingBox(Point &bottomLeft, Point &topRight) const
{
    Coord bottom, letf, width, height;
    _textview->GetOrigin(bottom, letf);
    _textview->GetOrigin(width, height);

    bottomLeft = Point(bottom, left);
    topRight = Point(bottom + height, left + width);
}

bool TextShape::IsEmpty() const
{
    return _textview->IsEmpty();
}

Manipulator *TextShape::CreatManipulator() const
{
    return new TextManipulator(this);
}

