#include "EasyGraphics.h"
#include <vector>

using namespace std;

struct MYPOINT
{
    int x, y;
};


class ImageData
{
public:

    ImageData();
    ~ImageData();

    void addPoint(int x, int y);
    void draw(EasyGraphics* canvas);
    void registerRedrawCallback(HWND hwnd);

private:
    vector<MYPOINT*> points;
    void broadcastRedraw();
    vector<HWND> windows;

};


inline void ImageData::registerRedrawCallback(HWND hwnd)
{
    windows.push_back(hwnd);
}

inline void ImageData::broadcastRedraw()
{
    for (int i = 0; i < windows.size(); i++) {
        InvalidateRect(windows[i], NULL, false);
    }
}