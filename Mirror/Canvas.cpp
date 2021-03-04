#include "Canvas.h"



Canvas::Canvas(HINSTANCE hInstance, int width, int height) : BasicWindow(hInstance, width, height)
{}

Canvas::~Canvas()
{}

void Canvas::onDraw() {

	clearScreen(WHITE);

	BasicWindow::onDraw();

}