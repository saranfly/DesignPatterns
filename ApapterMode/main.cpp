#include <iostream>
#include "textshape.h"

using namespace std;

int main()
{
    //类适配器方式
    TextShape test;
    Manipulator *ManipulatorObject = test.CreatManipulator();

/*********************************************************************************************/
/********************************    华丽的分割线    *******************************************/
/*********************************************************************************************/

    //对象适配器方式
    TextView *textviewObject = new TextView();
    TextShape test(textviewObject);
    Manipulator *ManipulatorObject = test.CreatManipulator();
    return 0;
}

