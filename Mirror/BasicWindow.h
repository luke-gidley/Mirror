#pragma once
#include "EasyGraphics.h"
#include "ImageData.h"
class BasicWindow :
	public EasyGraphics
{
public:

	BasicWindow(HINSTANCE hInstance, int width, int height, ImageData* imagedata);
	~BasicWindow();

	virtual void onCreate();

	void setWindowPosition(int x, int y);

	virtual void onDraw();

	void close();

protected:
	void createWindow(HINSTANCE hInstance, int width, int height);
	ImageData* getImageData() const;
	

private:
	ImageData* imagedata;
};

inline void BasicWindow::setWindowPosition(int x, int y)
{
	SetWindowPos(getHWND(), NULL, x, y, 0, 0, SWP_NOZORDER | SWP_NOSIZE);
}

inline void BasicWindow::close()
{
	SendMessage(getHWND(), WM_CLOSE, 0, 0);
}


inline void BasicWindow::createWindow(HINSTANCE hInstance, int width, int height)
{
	create(hInstance, width, height, 50, false);
	imagedata->registerRedrawCallback(getHWND());
}

/*inline void BasicWindow::drawImageData()
{
	
}*/

inline ImageData* BasicWindow::getImageData() const
{
	return imagedata;
}