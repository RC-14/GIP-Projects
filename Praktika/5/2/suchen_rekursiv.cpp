// Datei: suchen_rekursiv.cpp

#include <string>
#include "aufruf_visualisieren.h"
#include "suchen_rekursiv.h"

int zeichenkette_suchen_rekursiv(
	std::string text,
	std::string zkette,
	size_t text_pos,
	size_t text_such_pos,
	size_t zkette_such_pos
) {
	// Die folgende Zeile "aktivieren", wenn Sie zusaetzliche Programmausgaben
	// haben moechten, die das Verstaendnis der rekursiven Aufrufe ggfs.
	// unterstuetzen ...
	// aufruf_visualisieren(text, zkette, text_pos, text_such_pos, zkette_such_pos);

	if (text.length() - text_pos < zkette.length()) return -1;

	if (text[text_such_pos] == zkette[zkette_such_pos]) {
		// Return if we found the whole string
		if (zkette_such_pos == zkette.length() - 1) return text_pos;
		// Continue searching if not
		return zeichenkette_suchen_rekursiv(
			text,
			zkette,
			text_pos,
			text_such_pos + 1,
			zkette_such_pos + 1
		);
	}

	return zeichenkette_suchen_rekursiv(
		text,
		zkette,
		text_pos + 1,
		text_pos + 1,
		0
	);
}
