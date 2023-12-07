#include <iostream>
#include <string>
using namespace std;

int main() {
	int lineCount = 4;
	string* input = new string[lineCount];
	int length = 0;

	for (int i = 0; i < lineCount; i++) {
		cout << "Textzeile = ? ";
		getline(cin, input[i]);
		
		if (length < input[i].length()) length = input[i].length();

		if (input[i] == "") {
			lineCount = i;
			break;
		} 
	}

	for (int i = 0; i < lineCount; i++) {
		for (int j = 0; j < length - input[i].length(); j++) {
			cout << '#';
		}
		cout << input[i] << endl;
	}

	return 0;
}
