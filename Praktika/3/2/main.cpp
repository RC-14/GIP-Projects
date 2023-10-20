#include <iostream>
using namespace std;

int main() {
	char input1 = ' ';
	char input2 = ' ';

	cout << "Bitte geben Sie die erste Ziffer ein: ? ";
	cin >> input1;

	cout << "Bitte geben Sie die zweite Ziffer ein: ? ";
	cin >> input2;

	if (input1 == 'q' || input2 == 'q') {
		cout << "Das Programm wurde durch Eingabe von q beendet." << endl;
		return 1;
	}

	cout << input1 << " + " << input2 << " = " << int(input1) + int(input2) - '0' * 2 << endl;
	return 0;
}
