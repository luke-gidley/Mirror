#include "ImageData.h"


ImageData::ImageData() {

}

ImageData::~ImageData() {

	for (int i = 0; i < points.size(); i++)
	{
		delete points[i];
	}
}

void ImageData::addPoint(int x, int y) 
{
	MYPOINT* pt = new MYPOINT();
	pt->x = x;
	pt->y = y;
	points.push_back(pt);
	broadcastRedraw();
}




void ImageData::draw(EasyGraphics* canvas) {

	for (int i = 1; i < points.size(); i++)
	{
		canvas->drawLine(points[i - 1]->x, points[i - 1]->y, points[i]->x, points[i]->y);
	}

}