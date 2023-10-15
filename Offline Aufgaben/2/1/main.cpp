#include <iostream>
using namespace std;

int main() {
	double input = 0;
	cout << "Bitte geben Sie die Seitenlaenge ein (in cm): ? ";
	cin >> input;
	cout << "Der Umfang des Quadrats betraegt (in cm): " << input * 4 << endl;
	cout << "Die Flaeche des Quadrats betraegt (in cm*cm): " << input * input << endl;
	return 0;
}
