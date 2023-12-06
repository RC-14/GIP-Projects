#include <iostream>
using namespace std;

int main() {
	int breite = 0;
	int hoehe = 0;

	cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
	cin >> breite;

	cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
	cin >> hoehe;

	for (int i = 0; i < hoehe; i++) {
		for (int j = 0; j < i; j++) cout << ".";

		cout << "*";

		for (int j = 0; j < breite - 2; j++) {
			if (i == 0 || i == hoehe - 1) {
				cout << "*";
			} else {
				cout << "+";
			}
		}

		cout << "*" << endl;
	}

	return 0;
}
