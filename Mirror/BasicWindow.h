#pragma once
#include "EasyGraphics.h"
class BasicWindow :
	public EasyGraphics
{
public:

	BasicWindow(HINSTANCE hInstance, int width, int height);
	~BasicWindow();

	virtual void onCreate();

	void setWindowPosition(int x, int y);

	virtual void onDraw();

	void close();
	

private:

};

inline void BasicWindow::setWindowPosition(int x, int y)
{
	SetWindowPos(getHWND(), NULL, x, y, 0, 0, SWP_NOZORDER | SWP_NOSIZE);
}

inline void BasicWindow::close()
{
	SendMessage(getHWND(), WM_CLOSE, 0, 0);
}