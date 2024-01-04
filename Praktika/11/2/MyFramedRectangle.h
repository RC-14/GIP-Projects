#include "MyRectangle.h"

#pragma once

class MyFramedRectangle : MyRectangle {
public:
	MyFramedRectangle(MyCanvas& canvas, unsigned x1, unsigned y1, unsigned x2, unsigned y2) : MyRectangle(canvas, x1, y1, x2, y2) { };
	void draw();
};
