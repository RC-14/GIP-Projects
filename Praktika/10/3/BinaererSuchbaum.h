#include "BaumKnoten.h"

class BinaererSuchbaum {
	BaumKnoten* root = nullptr;
public:
	BaumKnoten* get_root() const { return root; };

	void einfuegen(int data);
	void ausgeben() const;
};
