#include <iostream>
#include <string>
using namespace std;

int main() {
	string eingabe[11];
	int sodoku[9][9];

	// Input
	cout << "Bitte geben Sie das Sudoku ein:" << endl;
	for (int i = 0; i < 11; i++) {
		getline(cin, eingabe[i]);
	}

	// Parse
	for (int i = 0; i < 11; i++) {
		if (i == 4 || i == 8) continue;

		int nLine = i;
		if (nLine > 2) nLine--;
		if (nLine > 6) nLine--;

		int nRow = 0;

		for (int j = 0; j < eingabe[i].length(); j++) {
			if ('0' > eingabe[i][j] || eingabe[i][j] > '9') continue;

			sodoku[nLine][nRow] = eingabe[i][j] - '0';
			nRow++;
		}
	}

	// Output
	cout << endl << "Das Sudoku lautet:" << endl;
	for (int i = 0; i < 9; i++) {
		if (i % 3 == 0 && i != 0) cout << "=======//=======//=======" << endl;

		for (int j = 0; j < 9; j++) {
			if (j % 3 == 0 && j != 0) cout << ";//";
			cout << ";" << sodoku[i][j];
		}

		cout << endl;
	}

	return 0;
}
