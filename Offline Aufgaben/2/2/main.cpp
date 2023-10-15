#include <iostream>
using namespace std;

//* Korrekte Lösung mit Tausch der Variablen:
int main() {
	int input1 = 0;
	int input2 = 0;
	int tmp = 0;

	cout << "Bitte geben Sie den ganzzahligen Wert der ersten Variable ein: ? ";
	cin >> input1;
	cout << "Bitte geben Sie den ganzzahligen Wert der zweiten Variable ein: ? ";
	cin >> input2;

	tmp = input1;
	input1 = input2;
	input2 = tmp;

	cout << "Nach dem Tausch:" << endl
		<< "Wert der ersten Variable: " << input1 << endl
		<< "Wert der zweiten Variable: " << input2 << endl;
	return 0;
}
/*/ // Alternativ kann man den Tausch auch einfach sein lassen:
int main() {
	int input1 = 0;
	int input2 = 0;
	int tmp = 0;

	cout << "Bitte geben Sie den ganzzahligen Wert der ersten Variable ein: ? ";
	cin >> input1;
	cout << "Bitte geben Sie den ganzzahligen Wert der zweiten Variable ein: ? ";
	cin >> input2;

	cout << "Nach dem Tausch:" << endl
		<< "Wert der ersten Variable: " << input2 << endl
		<< "Wert der zweiten Variable: " << input1 << endl;
	return 0;
}
//*/
