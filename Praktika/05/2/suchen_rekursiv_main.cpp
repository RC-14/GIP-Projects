// Datei: suchen_rekursiv_main.cpp

#define CATCH_CONFIG_RUNNER
#include "gip_mini_catch.h"

#include <iostream>
using namespace std;

#include "suchen_rekursiv.h"

int main() {
	Catch::Session().run();

	string text = "";
	string zkette = "";

	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, text);
	cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ? ";
	getline(cin, zkette);

	int result = zeichenkette_suchen_rekursiv(text, zkette);

	cout << "Die Zeichenkette '" << zkette << "' ist ";
	if (result == -1) cout << "NICHT ";
	cout << "in dem Text '" << text << "' enthalten." << endl;

	if (result != -1) cout << "Sie startet ab Zeichen " << result << " (bei Zaehlung ab 0)." << endl;

	return 0;
}
