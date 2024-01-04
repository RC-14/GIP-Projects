#include "MyRectangle.h"

MyRectangle& MyRectangle::operator*(unsigned i) {
	MyRectangle newRectangle(*this);

	newRectangle.x2 = (newRectangle.x2 - newRectangle.x1) * i + newRectangle.x1;
	newRectangle.y2 = (newRectangle.y2 - newRectangle.y1) * i + newRectangle.y1;

	return newRectangle;
};
