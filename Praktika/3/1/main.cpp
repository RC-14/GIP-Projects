#include <iostream>
using namespace std;

int main() {
	int jahr1 = 0;
	int monat1 = 0;
	int tag1 = 0;
	int jahr2 = 0;
	int monat2 = 0;
	int tag2 = 0;

	cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
	cin >> tag1;
	cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
	cin >> monat1;
	cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
	cin >> jahr1;
	cout << "Erstes Datum: " << tag1 << "." << monat1 << "." << jahr1 << endl << endl;

	cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
	cin >> tag2;
	cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
	cin >> monat2;
	cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
	cin >> jahr2;
	cout << "Zweites Datum: " << tag2 << "." << monat2 << "." << jahr2 << endl << endl;

	if (jahr1 < jahr2) {
		cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
		return 0;
	}
	else if (jahr1 > jahr2) {
		cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
		return 0;
	}

	if (monat1 < monat2) {
		cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
		return 0;
	}
	else if (monat1 > monat2) {
		cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
		return 0;
	}

	if (tag1 < tag2) {
		cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
		return 0;
	}
	else if (tag1 > tag2) {
		cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
		return 0;
	}

	cout << "Beide Datumsangaben sind gleich." << endl;
	return 0;
}
