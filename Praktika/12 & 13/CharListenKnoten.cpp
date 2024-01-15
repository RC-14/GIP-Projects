#include "CharListenKnoten.h"

int CharListenKnoten::next_available_id = 1;
int CharListenKnoten::object_count = 0;

CharListenKnoten::CharListenKnoten(char data, CharListenKnoten* next) : data{ data }, next{ next } {
	my_id = next_available_id;
	next_available_id++;

	object_count++;
}

CharListenKnoten::CharListenKnoten(CharListenKnoten& orig) {
	data = orig.get_data();
	next = orig.get_next();

	my_id = next_available_id;
	next_available_id++;

	object_count++;
}

CharListenKnoten::~CharListenKnoten() {
	object_count--;
}

void hinten_anfuegen(CharListenKnoten*& anker, const char wert) {
	CharListenKnoten* neuer_eintrag = new CharListenKnoten(wert);

	if (anker == nullptr) {
		anker = neuer_eintrag;
		return;
	}

	CharListenKnoten* ptr = anker;
	while (ptr->get_next() != nullptr) ptr = ptr->get_next();

	ptr->set_next(neuer_eintrag);
}

void loesche_alle(CharListenKnoten*& anker) {
	while (anker != nullptr) {
		CharListenKnoten* tmp = anker;
		anker = anker->get_next();
		delete tmp;
	}
}

CharListenKnoten* deep_copy(CharListenKnoten* orig) {
	if (orig == nullptr) return nullptr;

	CharListenKnoten* result = new CharListenKnoten(*orig);
	CharListenKnoten* last_copy = result;
	orig = orig->get_next();

	while (orig != nullptr) {
		last_copy->set_next(new CharListenKnoten(*orig));
		last_copy = last_copy->get_next();
		orig = orig->get_next();
	}

	return result;
}
