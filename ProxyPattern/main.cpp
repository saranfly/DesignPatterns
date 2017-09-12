#include <iostream>
#include "imageproxy.h"
using namespace std;
class TextDocument
{
public:
    TextDocument();
    void Insert(Graphic*);
    //...
};

int main()
{
    TextDocument* text = new TextDocument();
    //...
    text->Insert(new ImageProxy("anImageFileName"));
    return 0;
}

