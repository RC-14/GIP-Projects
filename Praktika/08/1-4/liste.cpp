// Datei: liste.cpp

#include <string>
#include "liste.h"

std::string liste_als_string(TListenKnoten* anker) {
	std::string resultat = "";

	if (anker == nullptr) {
		return "Leere Liste.";
	} else {
		resultat += "[ ";

		TListenKnoten* ptr = anker;
		do {
			resultat += std::to_string(ptr->data);

			if (ptr->next != nullptr) { resultat += " , "; } else { resultat += " "; }

			ptr = ptr->next;
		} while (ptr != nullptr);

		resultat += "]";
	}

	return resultat;
}

// Aufgabe 2
std::string liste_als_string_rueckwaerts(TListenKnoten* anker) {
	std::string resultat = "";

	if (anker == nullptr) {
		return "Leere Liste.";
	} else {
		resultat += "[ ";

		TListenKnoten* ptr = anker;

		// Goto last element
		while (ptr->next != nullptr) ptr = ptr->next;

		// Create the reversed list
		do {
			resultat += std::to_string(ptr->data);

			if (ptr->prev != nullptr) {
				resultat += " , ";
			} else {
				resultat += " ";
			}

			ptr = ptr->prev;
		} while (ptr != nullptr);

		resultat += "]";
	}

	return resultat;
}

// Aufgabe 1
void hinten_anfuegen(TListenKnoten*& anker, const int wert) {
	TListenKnoten* neuer_eintrag = new TListenKnoten{ .data = wert };

	if (anker == nullptr) {
		anker = neuer_eintrag;
	} else {
		TListenKnoten* ptr = anker;

		while (ptr->next != nullptr) {
			ptr = ptr->next;
		}

		ptr->next = neuer_eintrag;
		neuer_eintrag->prev = ptr;
	}
}

// Aufgabe 3
void in_liste_einfuegen(TListenKnoten*& anker, int wert_neu, int vor_wert) {
	TListenKnoten* neuer_eintrag = new TListenKnoten{ .data = wert_neu };

	// Handle empty list
	if (anker == nullptr) {
		anker = neuer_eintrag;
		return;
	}

	TListenKnoten* ptr = anker;

	// Handle match on first element
	if (ptr->data == vor_wert) {
		anker = neuer_eintrag;
		anker->next = ptr;
		ptr->prev = anker;
		return;
	}

	// Search for vor_wert
	while (ptr->next != nullptr && ptr->next->data != vor_wert) ptr = ptr->next;

	// Handle no match
	if (ptr->next == nullptr) {
		neuer_eintrag->prev = ptr;
		ptr->next = neuer_eintrag;
		return;
	}

	// Handle normal match
	neuer_eintrag->prev = ptr;
	neuer_eintrag->next = ptr->next;

	ptr->next->prev = neuer_eintrag;

	ptr->next = neuer_eintrag;
}

// Aufgabe 4
void aus_liste_loeschen(TListenKnoten*& anker, int wert) {
	// Handle empty list
	if (anker == nullptr) return;

	TListenKnoten* ptr = anker;

	// Handle match on first element
	if (ptr->data == wert) {
		anker = ptr->next;
		if (anker != nullptr) anker->prev = nullptr;

		delete ptr;
		return;
	}

	// Search for wert
	while (ptr != nullptr && ptr->data != wert) ptr = ptr->next;

	// Handle no match
	if (ptr == nullptr) return;

	// Handle normal match
	ptr->prev->next = ptr->next;
	if (ptr->next != nullptr) ptr->next->prev = ptr->prev;

	delete ptr;
}
