// Datei: aufruf_visualisieren.cpp

#include <iostream>
#include <string>
#include "aufruf_visualisieren.h"

// Die folgende Funktion wird nur intern innerhalb dieser Datei genutzt.
std::string wiederhole(std::string text, unsigned int anzahl);

void aufruf_visualisieren(
    std::string text, std::string zkette,
    size_t text_pos, size_t text_such_pos, size_t zkette_such_pos
) {
    const std::string einrueckung = wiederhole(" ", 10);
    std::string doublequote{'"'}, trennlinie = wiederhole("=", 70);

    std::cout << std::string("\n") << trennlinie << std::string("\n")
            << "zeichenkette_suchen_rekursiv(\n"
            << einrueckung << "text: " << doublequote << text << doublequote << ", \n" 
            << einrueckung << "zkette: " << doublequote << zkette << doublequote << ", \n"
            << einrueckung << "text_pos: " << text_pos << ", \n"
            << einrueckung << "text_such_pos: " << text_such_pos << ", \n"
            << einrueckung << "zkette_such_pos: " << zkette_such_pos << ")" << std::endl;

    std::cout << std::string("0123456789\n") << text << std::endl
        << wiederhole(" ", text_pos) << zkette << " ((zkette ab 'text_pos' " << text_pos << ", d.h. ab dort im text wird aktuell verglichen))\n"
        << wiederhole(" ", text_pos + zkette_such_pos) << "^ ((hier wird gerade verglichen))\n";
}

std::string wiederhole(std::string text, unsigned int anzahl) {
    std::string resultat = "";
    for (unsigned int i = 0; i < anzahl; i++) {
        resultat += text;
    }
    return resultat;
}
