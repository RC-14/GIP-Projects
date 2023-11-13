// Datei: sudoku_pruefen_main.cpp

#include <iostream>
#include <string>
using namespace std;

const size_t sudoku_groesse = 9;
const size_t eingabe_groesse = 11;

bool pruefe_spalten(int sudoku[sudoku_groesse][sudoku_groesse]) {
	bool correct = true;

	for (int i = 0; i < sudoku_groesse; i++) {
		int counter[sudoku_groesse] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

		// Count occurrences of the numbers
		for (int j = 0; j < sudoku_groesse; j++) counter[sudoku[j][i] - 1]++;

		for (int j = 0; j < sudoku_groesse; j++) {
			// Check for correctness
			if (counter[j] == 1) continue;
			correct = false;

			// Output
			cout << "Spalte " << i << ": Zahl " << j + 1 << " kommt ";
			if (counter[j] == 0) {
				cout << "nicht";
			}
			else {
				cout << "mehrfach";
			}
			cout << " vor." << endl;
		}
	}

	return correct;
}

bool pruefe_zeilen(int sudoku[sudoku_groesse][sudoku_groesse]) {
	bool correct = true;

	for (int i = 0; i < sudoku_groesse; i++) {
		int counter[sudoku_groesse] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

		// Count occurrences of the numbers
		for (int j = 0; j < sudoku_groesse; j++) counter[sudoku[i][j] - 1]++;

		for (int j = 0; j < sudoku_groesse; j++) {
			// Check for correctness
			if (counter[j] == 1) continue;
			correct = false;

			// Output
			cout << "Zeile " << i << ": Zahl " << j + 1 << " kommt ";
			if (counter[j] == 0) {
				cout << "nicht";
			}
			else {
				cout << "mehrfach";
			}
			cout << " vor." << endl;
		}
	}

	return correct;
}

bool pruefe_bloecke(int sudoku[sudoku_groesse][sudoku_groesse]) {
	bool correct = true;

	for (int i = 0; i < sudoku_groesse; i++) {
		int counter[sudoku_groesse] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

		// Count occurrences of the numbers
		for (int j = 0; j < sudoku_groesse; j++) counter[sudoku[i / 3 * 3 + j / 3][i * 3 % 9 + j % 3] - 1]++;

		for (int j = 0; j < sudoku_groesse; j++) {
			// Check for correctness
			if (counter[j] == 1) continue;
			correct = false;

			// Output
			cout << "Block " << i << ": Zahl " << j + 1 << " kommt ";
			if (counter[j] == 0) {
				cout << "nicht";
			}
			else {
				cout << "mehrfach";
			}
			cout << " vor." << endl;
		}
	}

	return correct;
}

void konvertiere(string eingabe[eingabe_groesse], int sudoku[sudoku_groesse][sudoku_groesse]) {
	for (int i = 0; i < eingabe_groesse; i++) {
		if (i == 3 || i == 7) continue;

		int nLine = i;
		if (nLine > 2) nLine--;
		if (nLine > 6) nLine--;

		int nRow = 0;

		for (int j = 0; j < eingabe[i].length(); j++) {
			if ('0' > eingabe[i][j] || eingabe[i][j] > '9') continue;

			sudoku[nLine][nRow] = eingabe[i][j] - '0';
			nRow++;
		}
	}
}

int main() {
	int sudoku[sudoku_groesse][sudoku_groesse];
	string eingabe[eingabe_groesse];

	cout << "Bitte geben Sie das Sudoku ein:" << endl;
	for (size_t i = 0; i < eingabe_groesse; i++) {
		getline(cin, eingabe[i]);
	}

	konvertiere(eingabe, sudoku);

	bool ps = pruefe_spalten(sudoku);
	bool pz = pruefe_zeilen(sudoku);
	bool pb = pruefe_bloecke(sudoku);

	if (ps && pz && pb) cout << "Das Sudoku ist gueltig." << endl;

	return 0;
}
