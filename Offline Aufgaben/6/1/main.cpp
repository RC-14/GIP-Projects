#include <iostream>
#include <string>
using namespace std;

void spalte_ab_erstem(char zeichen, string eingabe, string& erster_teil, string& zweiter_teil) {
	bool split = false;
	erster_teil = "";
	zweiter_teil = "";

	for (int i = 0; i < eingabe.length(); i++) {
		if (!split && eingabe[i] == zeichen) {
			split = true;
			continue;
		}

		if (split) {
			zweiter_teil += eingabe[i];
			continue;
		}
		erster_teil += eingabe[i];
	}
}

int main() {
	string input = "";
	char c = ' ';

	cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
	getline(cin, input);

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> c;

	string part1, part2 = "";

	spalte_ab_erstem(c, input, part1, part2);

	cout << "Der erste Teil der Zeichenkette lautet: " << part1 << endl;
	cout << "Der zweite Teil der Zeichenkette lautet: " << part2 << endl;

	return 0;
}
