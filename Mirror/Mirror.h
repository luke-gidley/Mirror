#pragma once
#include "BasicWindow.h"


class Mirror :
    public BasicWindow
{
public:
    Mirror(HINSTANCE hInstance, int width, int height, ImageData* imagedata);
    ~Mirror();

    virtual void onDraw();
    virtual void onCreate();
};

