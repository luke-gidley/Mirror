#pragma once
#include "BasicWindow.h"
#include <vector>

using namespace std;

struct MYPOINT
{
    int x, y;
};




class Canvas :
    public BasicWindow
{
public:
    Canvas(HINSTANCE hInstance, int width, int height);
    ~Canvas();

    void onDraw();
    void onLButtonDown(UINT nFlags, int x, int y);          
    void onLButtonUp(UINT nFlags, int x, int y);


private:
    vector<MYPOINT*> points;

    void onCreate();
};

