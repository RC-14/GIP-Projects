#include "BaumKnoten.h"
#include <iostream>

void BaumKnoten::ausgeben(unsigned tiefe) const {
	if (rechts != nullptr) rechts->ausgeben(tiefe + 1);

	for (int i = 0; i < tiefe; i++) std::cout << "++";
	std::cout << data << std::endl;

	if (links != nullptr) links->ausgeben(tiefe + 1);
}
