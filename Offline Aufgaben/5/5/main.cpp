#include <iostream>
using namespace std;

int main() {
	int numArr[9] = {};
	int counter = 0;

	for (int i = 0; i < 9; i++) {
		char c = ' ';
		while (c < '1' || c > '6') {
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> c;
		}
		numArr[i] = c - '0';

		bool unique = true;
		for (int j = 0; j < i && unique; j++) {
			if (numArr[i] == numArr[j]) unique = false;
		}

		if (unique) counter++;
	}

	cout << "In der Eingabe kamen " << counter << " unterschiedliche Zahlen vor." << endl;

	return 0;
}
