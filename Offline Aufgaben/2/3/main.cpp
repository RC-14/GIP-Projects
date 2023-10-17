#include <iostream>
using namespace std;

int main() {
	int summe = 0;
	int kandidat1 = 0;
	int kandidat2 = 0;
	int kandidat3 = 0;

	cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? ";
	cin >> summe;
	cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? ";
	cin >> kandidat1;
	cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? ";
	cin >> kandidat2;

	kandidat3 = summe - kandidat1 - kandidat2;
	cout << "Auf den dritten Kandidaten sind somit " << kandidat3 << " Stimmen entfallen." << endl;

	cout << "Kandidat 1 erhielt " << double(kandidat1) / summe * 100 << "\% der Stimmen." << endl;
	cout << "Kandidat 2 erhielt " << double(kandidat2) / summe * 100 << "\% der Stimmen." << endl;
	cout << "Kandidat 3 erhielt " << double(kandidat3) / summe * 100 << "\% der Stimmen." << endl;
	return 0;
}
