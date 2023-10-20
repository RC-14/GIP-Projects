#include <iostream>
using namespace std;

int main() {
	char input = ' ';

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> input;

	if (input >= 'a' && input <= 'z') {
		cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben." << endl;
		return 0;
	}
	
	cout << "KEIN Kleinbuchstabe (a-z)." << endl;
	return 0;
}
