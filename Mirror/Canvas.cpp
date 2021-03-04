#include "Canvas.h"



Canvas::Canvas(HINSTANCE hInstance, int width, int height) : BasicWindow(hInstance, width, height)
{}

Canvas::~Canvas()
{
	for (int i = 0; i < points.size(); i++)
	{
		delete points[i];
	}
}

void Canvas::onDraw() {

	clearScreen(WHITE);

	setPenColour(BLACK, 1);

	for (int i = 1; i < points.size(); i++)
	{
		drawLine(points[i - 1]->x, points[i - 1]->y, points[i]->x, points[i]->y);
	}
	BasicWindow::onDraw();

}

void Canvas::onCreate() {
	BasicWindow::onCreate();

	SetWindowText(getHWND(), L"Canvas");
}
}

void Canvas::onLButtonDown(UINT nFlags, int x, int y)
{
	MYPOINT* pt = new MYPOINT();
	pt->x = x;
	pt->y = y;

	points.push_back(pt);
	onDraw();
}
void Canvas::onLButtonUp(UINT nFlags, int x, int y)
{

}