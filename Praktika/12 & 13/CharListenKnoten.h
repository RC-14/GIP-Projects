#pragma once

class CharListenKnoten {
public:
	static int next_available_id;
	static int object_count;

private:
	char data;
	CharListenKnoten* next;
	int my_id;

public:
	CharListenKnoten(char data, CharListenKnoten* next = nullptr);
	CharListenKnoten(CharListenKnoten& orig);
	~CharListenKnoten();

	void set_data(char newData) { data = newData; }
	char get_data() { return data; }

	void set_next(CharListenKnoten* newNext) { next = newNext; }
	CharListenKnoten* get_next() { return next; }

	int get_my_id() { return my_id; }
};

void hinten_anfuegen(CharListenKnoten*& anker, const char wert);
void loesche_alle(CharListenKnoten*& anker);
CharListenKnoten* deep_copy(CharListenKnoten* orig);
