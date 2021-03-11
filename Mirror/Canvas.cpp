#include "Canvas.h"



Canvas::Canvas(HINSTANCE hInstance, int width, int height, ImageData* imagedata) : BasicWindow(hInstance, width, height, imagedata)
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
	getImageData()->addPoint(x, y);
	onDraw();
}
void Canvas::onLButtonUp(UINT nFlags, int x, int y)
{

}