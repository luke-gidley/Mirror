#include "Mirror.h"


Mirror::Mirror(HINSTANCE hInstance, int width, int height, ImageData* imagedata) : BasicWindow(hInstance, width, height, imagedata)
{
	createWindow(hInstance, width, height);

}

Mirror::~Mirror() 
{}


void Mirror::onDraw() {

	clearScreen(BLACK);
	setPenColour(WHITE, 1);
	


	BasicWindow::onDraw();
}

void  Mirror::onCreate() {
	BasicWindow::onCreate();

	SetWindowText(getHWND(), L"Mirror");
}