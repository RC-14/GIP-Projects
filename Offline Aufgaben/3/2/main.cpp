#include <iostream>
using namespace std;

int main() {
	char input = ' ';

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> input;

	if (input == 'j' || input == 'J') {
		cout << "Es handelt sich um eine Ja Eingabe." << endl;
	} else if (input == 'n' || input == 'N') {
		cout << "Es handelt sich um eine Nein Eingabe." << endl;
	} else {
		cout << "Es handelt sich um eine sonstige Eingabe." << endl;
	}
	return 0;
}
