#pragma once

namespace suchbaum {
	struct BaumKnoten {
		int data;
		BaumKnoten* links = nullptr;
		BaumKnoten* rechts = nullptr;
	};

	void knoten_ausgeben(BaumKnoten* knoten, unsigned int tiefe);

	void ausgeben(BaumKnoten* anker);

	void einfuegen(BaumKnoten*& anker, int newData);
}
