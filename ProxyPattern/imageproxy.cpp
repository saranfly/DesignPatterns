#include "imageproxy.h"
#include "string.h"

ImageProxy::ImageProxy()
{

}

ImageProxy::ImageProxy(const char *imagefile)
{
    _fileName = strdup(imagefile);
    _extent = Point::Zero;
    _image = 0;
}

ImageProxy::~ImageProxy()
{

}

void ImageProxy::Draw(const Point &at)
{
    GetImage()->Draw(at);
}

void ImageProxy::HandleMouse(Event &event)
{
    GetImage()->HandleMouse(event);
}

const Point &ImageProxy::GetExtent()
{
    if(_extent == Point::Zero)
    {
        _extent = GentImage()->GetExtent();
    }
    retrurn _extent;
}

void ImageProxy::Load(istream &from)
{
    from>>_extent>>_fileName;
}

void ImageProxy::Save(ostream &to)
{
    to<<_extent<<_fileName;
}

Image *ImageProxy::GetImage()
{
    if(_image == 0)
    {
        _image = new Image(_fileName);
    }
    return _image;
}

