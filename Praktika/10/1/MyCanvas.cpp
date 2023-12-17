#include <MyCanvas.h>

char* copyCanvasArray(char* array) {
	int i = 0;
	while (array[i] != '\0') i++;

	char* copy = new char[i + 1];
	for (; i >= 0; i--) copy[i] = array[i];

	return copy;
}

unsigned MyCanvas::get_canvas_array_position(unsigned x, unsigned y) const {
	return y * size_x + x;
}

void MyCanvas::init() {
	unsigned arraySize = get_canvas_array_position(size_x - 1, size_y - 1) + 1;

	for (unsigned i = 0; i < arraySize; i++) canvas_array_ptr[i] = '.';
	// Technisch gesehen, laut Aufgabenstellung, falsch, aber ein C-String endet nun mal mit '\0'.
	canvas_array_ptr[arraySize] = '\0';
};

MyCanvas::MyCanvas(unsigned size_x, unsigned size_y) {
	this->size_x = size_x;
	this->size_y = size_y;
	canvas_array_ptr = new char[get_canvas_array_position(size_x - 1, size_y - 1) + 1];
	init();
};

MyCanvas::MyCanvas(const MyCanvas& orig) {
	size_x = orig.size_x;
	size_y = orig.size_y;
	canvas_array_ptr = copyCanvasArray(orig.canvas_array_ptr);
};

MyCanvas::~MyCanvas() {
	delete[] canvas_array_ptr;
};

MyCanvas MyCanvas::operator=(const MyCanvas& orig) {
	size_x = orig.size_x;
	size_y = orig.size_y;
	canvas_array_ptr = copyCanvasArray(orig.canvas_array_ptr);

	return orig;
};

void MyCanvas::set_size_x(unsigned size_x) {
	this->size_x = size_x;
}

void MyCanvas::set_size_y(unsigned size_y) {
	this->size_y = size_y;
}

void MyCanvas::set_canvas_array_ptr(char* canvas_array_ptr) {
	this->canvas_array_ptr = canvas_array_ptr;
}

void MyCanvas::set(unsigned x, unsigned y, char c) {
	canvas_array_ptr[get_canvas_array_position(x, y)] = c;
};

int MyCanvas::get_size_x() const {
	return size_x;
};

int MyCanvas::get_size_y() const {
	return size_y;
};

char* MyCanvas::get_canvas_array_ptr() const {
	return canvas_array_ptr;
};

char MyCanvas::get(unsigned x, unsigned y) const {
	return canvas_array_ptr[get_canvas_array_position(x, y)];
};

std::string MyCanvas::to_string() const {
	std::string result = "";

	for (unsigned y = 0; y < size_y; y++) {
		for (unsigned x = 0; x < size_x; x++) {
			result += canvas_array_ptr[get_canvas_array_position(x, y)];
		}
		result += '\n';
	}

	return result;
};

void MyCanvas::print() const {
	std::cout << to_string();
};
