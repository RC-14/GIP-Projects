// Datei: main.cpp

#define CATCH_CONFIG_RUNNER
#include "gip_mini_catch_v_2_3.h"

#include "MyCanvas.h"
#include "MyRectangle.h"

int main()
{
    // Aufruf der Unit Tests ...
    Catch::Session().run();

    system("PAUSE");
    return 0;
}
