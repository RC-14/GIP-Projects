// Datei: liste_main.cpp

#include <iostream>
#include <string>

#define CATCH_CONFIG_RUNNER
#include "gip_mini_catch.h"

#include "liste.h"

int main() {
	Catch::Session().run();

	const size_t laenge = 10;
	TListenKnoten* anker = nullptr;

	std::cout << liste_als_string(anker) << std::endl;
	std::cout << liste_als_string_rueckwaerts(anker) << std::endl;

	for (size_t i = 0; i < laenge; i++) {
		hinten_anfuegen(anker, i * i);
	}

	std::cout << liste_als_string(anker) << std::endl;
	std::cout << liste_als_string_rueckwaerts(anker) << std::endl;

	in_liste_einfuegen(anker, 11, 0);
	std::cout << liste_als_string(anker) << std::endl;
	std::cout << liste_als_string_rueckwaerts(anker) << std::endl;

	in_liste_einfuegen(anker, 22, 25);
	std::cout << liste_als_string(anker) << std::endl;
	std::cout << liste_als_string_rueckwaerts(anker) << std::endl;

	in_liste_einfuegen(anker, 33, 81);
	std::cout << liste_als_string(anker) << std::endl;
	std::cout << liste_als_string_rueckwaerts(anker) << std::endl;

	in_liste_einfuegen(anker, 44, 99);
	std::cout << liste_als_string(anker) << std::endl;
	std::cout << liste_als_string_rueckwaerts(anker) << std::endl;

	aus_liste_loeschen(anker, 11);
	std::cout << liste_als_string(anker) << std::endl;
	std::cout << liste_als_string_rueckwaerts(anker) << std::endl;

	aus_liste_loeschen(anker, 22);
	std::cout << liste_als_string(anker) << std::endl;
	std::cout << liste_als_string_rueckwaerts(anker) << std::endl;

	aus_liste_loeschen(anker, 33);
	std::cout << liste_als_string(anker) << std::endl;
	std::cout << liste_als_string_rueckwaerts(anker) << std::endl;

	aus_liste_loeschen(anker, 44);
	std::cout << liste_als_string(anker) << std::endl;
	std::cout << liste_als_string_rueckwaerts(anker) << std::endl;

	return 0;
}
