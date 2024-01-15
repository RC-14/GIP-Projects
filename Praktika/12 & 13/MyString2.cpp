#include "MyString2.h"
#include <string>

MyString2::MyString2(std::string str) {
	if (str.length() == 0) {
		anker = nullptr;
	} else {
		anker = new CharListenKnoten(str[0]);

		for (int i = 1; i < str.length(); i++) hinten_anfuegen(anker, str[i]);
	}
}

MyString2 MyString2::operator=(MyString2 new_str) {
	loesche_alle(anker);
	anker = deep_copy(new_str.anker);

	return new_str;
}

MyString2 MyString2::operator+(char c) const {
	MyString2 result = MyString2(*this);

	hinten_anfuegen(result.anker, c);

	return result;
}

unsigned int MyString2::length() const {
	unsigned counter = 0;

	CharListenKnoten* ptr = anker;
	while (ptr != nullptr) {
		counter++;
		ptr = ptr->get_next();
	}

	return counter;
}

char MyString2::at(unsigned int pos) const {
	CharListenKnoten* ptr = anker;

	for (unsigned i = 0; i < pos; i++) {
		if (ptr == nullptr) break;
		ptr = ptr->get_next();
	}

	if (ptr == nullptr) return '\0';
	return ptr->get_data();
}

std::string MyString2::to_string() const {
	std::string result = "";

	CharListenKnoten* ptr = anker;
	while (ptr != nullptr) {
		result += ptr->get_data();
		ptr = ptr->get_next();
	}

	return result;
}
