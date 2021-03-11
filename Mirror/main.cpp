#include <Windows.h>
#include <crtdbg.h>
#include "Canvas.h"
#include "Mirror.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int show)
{
#ifdef _DEBUG
	_onexit(_CrtDumpMemoryLeaks);
#endif


	const int NO_OF_MIRRORS = 3;
	const int TOP = 100;
	const int LEFT = 100;
	const int WIDTH = 400;
	const int HEIGHT = 800;



	BasicWindow* windows[1 + NO_OF_MIRRORS];
	windows[0] = new Canvas(hInstance, WIDTH, HEIGHT);
	windows[0]->setWindowPosition(LEFT, TOP);

	for (int i = 1; i <= NO_OF_MIRRORS; i++)
	{
		windows[i] = new Mirror(hInstance, WIDTH, HEIGHT);
		windows[i]->setWindowPosition(LEFT+i*WIDTH, TOP);

	}

	windows[0]->waitForClose();
	delete windows[0];

	for (int i = 1; i <= NO_OF_MIRRORS; i++)
	{
		windows[i]->close();
		windows[i]->waitForClose();
		delete windows[i];
	}


	return 0;

}