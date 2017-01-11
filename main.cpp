#include "D:\c++\Project1\project1\TXLib.h"

int main()
{
    int time = 0;
    txCreateWindow (500, 596);

    while (!GetAsyncKeyState(VK_ESCAPE)) {
        txSetFillColor(TX_WHITE);
        txSelectFont ("Arial", 40, 0, FW_BOLD);

        txSetColor(TX_BLACK);
        txClear();

        txSetFillColor(TX_RED);
        txCircle(txMouseX(), txMouseY(), 20);

        time = time + 75;

        int seconds = time % 60;
        int minutes = ROUND(time / 60) % 60;
        int hours   = time / 3600;
        char vremya[100];
        sprintf (vremya, "Время = %d:%d:%d", hours, minutes, seconds);
        txTextOut (100, 100, vremya);

        txSleep(50);
    }

    return 0;
}
