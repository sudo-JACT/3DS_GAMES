#include <3ds.h>

#include <cstddef>
#include <cstdlib>
#include <iostream>

void crealScr() {

    printf("\x1b[2J");
    printf("\x1b[H");
}

typedef struct {

    s16 x;
    s16 y;

} posis;

int main() {

    srand(time(0));

    gfxInitDefault();

    consoleInit(GFX_TOP, NULL);
    std::cout << rand();

    consoleInit(GFX_BOTTOM, NULL);
    std::cout << rand();

    while (aptMainLoop()) {

        hidScanInput();


        if (hidKeysDown() & KEY_START) {

            break;
        }

        gfxFlushBuffers();
        gfxSwapBuffers();

        gspWaitForVBlank();
    }

    gfxExit();
    return 0;
}
