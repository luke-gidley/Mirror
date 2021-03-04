#pragma once
#include "BasicWindow.h"
class Canvas :
    public BasicWindow
{
public:
    Canvas(HINSTANCE hInstance, int width, int height);
    ~Canvas();

    void onDraw();

};

