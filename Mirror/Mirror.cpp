#include "Mirror.h"


Mirror::Mirror(HINSTANCE hInstance, int width, int height) : BasicWindow(hInstance, width, height)
{}

Mirror::~Mirror() 
{}


void Mirror::onDraw() {

	clearScreen(BLACK);

	BasicWindow::onDraw();
}

void  Mirror::onCreate() {
	BasicWindow::onCreate();

	SetWindowText(getHWND(), L"Mirror");
}