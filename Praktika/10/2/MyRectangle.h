#include "MyCanvas.h"

#pragma once

class MyRectangle {
protected:
	unsigned x1, y1, x2, y2;
	MyCanvas* canvas_ptr;

public:
	MyRectangle(MyCanvas& canvas, unsigned x1, unsigned y1, unsigned x2, unsigned y2) : x1{ x1 }, y1{ y1 }, x2{ x2 }, y2{ y2 }, canvas_ptr{ &canvas } { };

	void set_x1(unsigned x1) { this->x1 = x1; };
	void set_y1(unsigned y1) { this->y1 = y1; };
	void set_x2(unsigned x2) { this->x2 = x2; };
	void set_y2(unsigned y2) { this->y2 = y2; };
	void set_canvas_ptr(MyCanvas* canvas_ptr) { this->canvas_ptr = canvas_ptr; };

	unsigned get_x1() const { return x1; };
	unsigned get_y1() const { return y1; };
	unsigned get_x2() const { return x2; };
	unsigned get_y2() const { return y2; };
	MyCanvas* get_canvas_ptr() const { return canvas_ptr; };

	void draw() { canvas_ptr->draw_rectangle(x1, y1, x2, y2); };
};
