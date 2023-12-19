#include <iostream>
#include <BinaererSuchbaum.h>

void BinaererSuchbaum::einfuegen(int data) {
	if (root == nullptr) {
		root = new BaumKnoten(data, nullptr, nullptr);
		return;
	}

	BaumKnoten* ptr = root;

	while (ptr->get_data() != data) {
		if (ptr->get_data() < data) {
			if (ptr->get_rechts() == nullptr) {
				ptr->set_rechts(new BaumKnoten(data, nullptr, nullptr));
				return;
			}
			ptr = ptr->get_rechts();
			continue;
		}

		if (ptr->get_links() == nullptr) {
			ptr->set_links(new BaumKnoten(data, nullptr, nullptr));
			return;
		}
		ptr = ptr->get_links();
	}
}

void BinaererSuchbaum::ausgeben() const {
	if (root != nullptr) {
		root->ausgeben(0);
		return;
	}
	std::cout << "Leerer Baum." << std::endl;
}
