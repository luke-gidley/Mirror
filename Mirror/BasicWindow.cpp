#include "BasicWindow.h"


BasicWindow::BasicWindow(HINSTANCE hInstance, int width, int height, ImageData* imagedata) : imagedata(imagedata)
{
    setImmediateDrawMode(false);


}

BasicWindow::~BasicWindow() 
{

}

void BasicWindow::onDraw()
{
    imagedata->draw(this);

    EasyGraphics::onDraw();
}

void BasicWindow::onCreate()
{
    EasyGraphics::onCreate();

}

