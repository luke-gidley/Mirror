#include "BasicWindow.h"


BasicWindow::BasicWindow(HINSTANCE hInstance, int width, int height)
{
    setImmediateDrawMode(false);
    create(hInstance, width, height, 50, false);
}

BasicWindow::~BasicWindow() 
{

}

void BasicWindow::onDraw()
{
    EasyGraphics::onDraw();
}

void BasicWindow::onCreate()
{
    EasyGraphics::onCreate();

    SetWindowText(getHWND(), L"Mirror, Mirror");
}

//wah