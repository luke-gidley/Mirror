#include "Mirror.h"


Mirror::Mirror(HINSTANCE hInstance, int width, int height) : BasicWindow(hInstance, width, height)
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