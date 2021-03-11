#pragma once
#include "BasicWindow.h"


using namespace std;


class Canvas :
    public BasicWindow
{
public:
    Canvas(HINSTANCE hInstance, int width, int height);
    ~Canvas();

    virtual void onCreate();

    virtual void onDraw();
    virtual void onLButtonDown(UINT nFlags, int x, int y);
    virtual void onLButtonUp(UINT nFlags, int x, int y);
    virtual void onMouseMove(UINT nFlags, int x, int y);


private:



};

