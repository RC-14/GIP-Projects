// Datei: suchbaum_main.cpp

#define CATCH_CONFIG_RUNNER
#include "gip_mini_catch_v_2_3.h"

#include <iostream>

#include "BinaererSuchbaum.h"

int main()
{
    // Aufruf der Unit Tests ...
    Catch::Session().run();

    int wert = 99;

    BinaererSuchbaum baum;

    baum.ausgeben();

    do
    {
        std::cout << "Naechster Wert (99 beendet): ? ";
        std::cin >> wert;

        if (wert != 99) {
            baum.einfuegen(wert);
        }

    } while (wert != 99);

    baum.ausgeben();

    return 0;
}
