#ifndef IMAGEPROXY_H
#define IMAGEPROXY_H
#include "image.h"

class ImageProxy : public Graphic
{
public:
    ImageProxy(const char* imagefile);
    virtual ~ImageProxy();
    virtual void Draw(const Point& at);
    virtual void HandleMouse(Event& event);
    virtual const Point& GetExtent();
    virtual void Load(istream& from);
    virtual void Save(ostream& to);
protected:
    Image* GetImage();
private:
    Image* _image;
    Point _extent;
    char* _fileName;
};

#endif // IMAGEPROXY_H
