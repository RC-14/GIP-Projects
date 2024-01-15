#include <iostream>
using namespace std;

int main() {
	double input = 0;
	int auswahl = 0;

	cout << "Input: ";
	cin >> input;
	cout
		<< "  [1] Celsius -> Fahrenheit" << endl
		<< "  [2] Meter   -> Fuß" << endl
		<< "  [3] EUR -> USD" << endl
		<< "Auswahl: ";
	cin >> auswahl;

	cout << "Ergebnis: "
		// Celsius -> Fahrenheit
		<< (input * 1.8 + 32) * (auswahl - 2) * (auswahl - 3) * 0.5
		// Meter -> Fuß
		+ input * 3.2808 * (auswahl - 1) * (auswahl - 3) * -1
		// EUR -> USD
		+ input * 1.2957 * (auswahl - 1) * (auswahl - 2) * 0.5
		<< endl;

	return 0;
}
