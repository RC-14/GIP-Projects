#include <iostream>
#include <string>
using namespace std;

struct T_Morse_Data {
	char letter;
	std::string morse_code;
};

const T_Morse_Data morse_data[] = {
	{ 'a', ".-" },
	{ 'b', "-..." },
	{ 'c', "-.-." },
	{ 'd', "-.." },
	{ 'e', "." },
	{ 'f', "..-." },
	{ 'g', "--." },
	{ 'h', "...." },
	{ 'i', ".." },
	{ 'j', ".---" },
	{ 'k', "-.-" },
	{ 'l', ".-.." },
	{ 'm', "--" },
	{ 'n', "-." },
	{ 'o', "---" },
	{ 'p', ".--." },
	{ 'q', "--.-" },
	{ 'r', ".-." },
	{ 's', "..." },
	{ 't', "-" },
	{ 'u', "..-" },
	{ 'v', "...-" },
	{ 'w', ".--" },
	{ 'x', "-..-" },
	{ 'y', "-.--" },
	{ 'z', "--.." },
	{ '0', "-----" },
	{ '1', ".----" },
	{ '2', "..---" },
	{ '3', "...--" },
	{ '4', "....-" },
	{ '5', "....." },
	{ '6', "-...." },
	{ '7', "--..." },
	{ '8', "---.." },
	{ '9', "----." },
	// Leerzeichen zur Worttrennung werden im Morsecode
	// durch einen Slash '/' umgeben von Leerzeichen
	// dargestellt ...
	// (Alternative: Trennung durch 3 Leerzeichen)
	// Hier bei uns, um die Testläufe eindeutiger zu
	// machen: Trennung mittels drei Slashes
	{ ' ', "///" },
	{ '.', ".-.-.-" },
	{ ',', "--..--" },
	{ ':', "---..." },
	{ '?', "..--.." },
	{ '-', "-....-" },
	{ '/', "-..-." },
	{ '@', ".--.-." },
	{ '=', "-...-" }
};

const int morse_data_len = 45;

int main() {
	string input = "";

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
		char c = input[i];

		if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';

		for (int j = 0; j < morse_data_len; j++){
			if (morse_data[j].letter != c) continue;

			cout << morse_data[j].morse_code;
			break;
		}
		cout << '#';
	}

	cout << endl;

	return 0;
}
