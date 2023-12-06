#include <iostream>
#include <string>
using namespace std;

int main() {
	string input = "";

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, input);

	string output = "";

	for (int i = 0; i < input.length(); i++) {
		char c = input[i];

		// 'a' - 'z' -> 'aa' - 'zz'
		if (c >= 'a' && c <= 'z') {
			output += c;
			output += c;
			continue;
		}

		// 'A' - 'Z' -> 'AAA' - 'ZZZ'
		if (c >= 'A' && c <= 'Z') {
			output += c;
			output += c;
			output += c;
			continue;
		}

		// '0' - '9' -> '.'
		if (c >= '0' && c <= '9') {
			output += '.';
			continue;
		}

		// '?' | '!' -> ''
		if (c == '?' || c == '!') continue;

		// ' ' -> '_'
		if (c == ' ') {
			output += '_';
			continue;
		}

		output += c;
	}

	cout << "Der Text nach der Umwandlung: " << output << endl;
	return 0;
}
