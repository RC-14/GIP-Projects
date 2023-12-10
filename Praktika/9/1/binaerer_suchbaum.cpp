#include <iostream>
#include <binaerer_suchbaum.h>

namespace suchbaum {
	void knoten_ausgeben(BaumKnoten* knoten, unsigned int tiefe) {
		if (knoten == nullptr) return;

		knoten_ausgeben(knoten->rechts, tiefe + 1);

		for (int i = 0; i < tiefe; i++) std::cout << "++";
		std::cout << knoten->data << std::endl;

		knoten_ausgeben(knoten->links, tiefe + 1);
	}

	void ausgeben(BaumKnoten* anker) {
		knoten_ausgeben(anker, 0);
	}

	void einfuegen(BaumKnoten*& anker, int newData) {
		if (anker == nullptr) {
			anker = new BaumKnoten{ .data = newData };
			return;
		}

		BaumKnoten* ptr = anker;

		while (ptr->data != newData) {
			if (ptr->data < newData) {
				if (ptr->rechts == nullptr) {
					ptr->rechts = new BaumKnoten{ .data = newData };
					return;
				}
				ptr = ptr->rechts;
				continue;
			}

			if (ptr->links == nullptr) {
				ptr->links = new BaumKnoten{ .data = newData };
				return;
			}
			ptr = ptr->links;
		}
	}
}
