// Datei: liste.h

#pragma once

#include <string>

struct TListenKnoten {
	int data;
	TListenKnoten* next = nullptr;
	TListenKnoten* prev = nullptr;
};

std::string liste_als_string(TListenKnoten* anker);

std::string liste_als_string_rueckwaerts(TListenKnoten* anker);

void hinten_anfuegen(TListenKnoten*& anker, const int wert);

void in_liste_einfuegen(TListenKnoten*& anker, int wert_neu, int vor_wert);

void aus_liste_loeschen(TListenKnoten*& anker, int wert);
