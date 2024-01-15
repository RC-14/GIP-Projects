#include "CharListenKnoten.h"
#include <string>

class MyString2 {
private:
	CharListenKnoten* anker;

public:
	MyString2() : anker{ nullptr } { };
	MyString2(std::string str);
	MyString2(const MyString2& orig) { anker = deep_copy(orig.anker); };
	~MyString2() { loesche_alle(anker); }

	MyString2 operator=(MyString2 new_str);
	MyString2 operator+(char c) const;

	CharListenKnoten* get_anker() { return anker; }
	void set_anker(CharListenKnoten* new_anker) { anker = new_anker; }

	unsigned int length() const;
	char at(unsigned int pos) const;
	std::string to_string() const;
};
