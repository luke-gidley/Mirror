#include "BasicWindow.h"


BasicWindow::BasicWindow(HINSTANCE hInstance, int width, int height)
{
    setImmediateDrawMode(false);
    ImageData::getImageData()->registerRedrawCallback(getHWND());

}

BasicWindow::~BasicWindow() 
{

}

void BasicWindow::onDraw()
{
    ImageData::getImageData()->draw(this);

    EasyGraphics::onDraw();
}

void BasicWindow::onCreate()
{
    EasyGraphics::onCreate();

}

