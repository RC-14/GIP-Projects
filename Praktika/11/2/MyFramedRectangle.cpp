#include "MyFramedRectangle.h"

void MyFramedRectangle::draw() {
	MyRectangle::draw();

	for (unsigned x = MyRectangle::x1; x <= MyRectangle::x2; x++) {
		MyRectangle::canvas_ptr->set(x, MyRectangle::y1, '+');
		MyRectangle::canvas_ptr->set(x, MyRectangle::y2, '+');
	}

	for (unsigned y = MyRectangle::y1 + 1; y < MyRectangle::y2; y++) {
		MyRectangle::canvas_ptr->set(MyRectangle::x1, y, '+');
		MyRectangle::canvas_ptr->set(MyRectangle::x2, y, '+');
	}
}
