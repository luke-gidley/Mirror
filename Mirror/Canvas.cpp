#include "Canvas.h"



Canvas::Canvas(HINSTANCE hInstance, int width, int height) : BasicWindow(hInstance, width, height)
{
	createWindow(hInstance, width, height);

	
}

Canvas::~Canvas()
{
	
}

void Canvas::onDraw() {

	clearScreen(WHITE);
	setPenColour(BLACK, 1);

	BasicWindow::onDraw();

}

void Canvas::onCreate() {

	BasicWindow::onCreate();

	SetWindowText(getHWND(), L"Canvas");
}


void Canvas::onLButtonDown(UINT nFlags, int x, int y)
{
	
	

}
void Canvas::onLButtonUp(UINT nFlags, int x, int y)
{

}

void Canvas::onMouseMove(UINT nFlags, int x, int y)
{
	if (nFlags&MK_LBUTTON)
		ImageData::getImageData()->addPoint(x, y);
}