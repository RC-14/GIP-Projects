// Datei: MyCanvas.h

#pragma once

#include "gip_mini_catch_heap_delete.h"
#include <string>

class MyCanvas {
protected:
	unsigned size_x, size_y;
	char* canvas_array_ptr;

	unsigned get_canvas_array_position(unsigned x, unsigned y) const;

	void init();

public:
	MyCanvas(unsigned size_x, unsigned size_y);
	MyCanvas(const MyCanvas& orig);
	~MyCanvas();

	MyCanvas& operator=(const MyCanvas& orig);

	void set_size_x(unsigned size_x);
	void set_size_y(unsigned size_y);
	void set_canvas_array_ptr(char* canvas_array_ptr);
	void set(unsigned int x, unsigned int y, char c);

	int get_size_x() const;
	int get_size_y() const;
	char* get_canvas_array_ptr() const;
	char get(unsigned int x, unsigned int y) const;
	std::string to_string() const;

	void print() const;
};
