#include <iostream>
#include <string>
using namespace std;

string trimme(string input) {
	string output = "";
	string buffer = "";
	
	for (int i = 0; i < input.length(); i++) {
		if (output.length() == 0 && input[i] == '+') continue;

		if (input[i] == '+') {
			buffer += '+';
			continue;
		}

		output += buffer + input[i];
		buffer = "";
	}

	return output;
}

int main() {
	string s = "";

	cout << "Bitte geben Sie die Textzeile ein: ? ";
	getline(cin, s);

	cout << "Vorher: " << s << endl;
	cout << "Nachher: " << trimme(s) << endl;
	
	return 0;
}
