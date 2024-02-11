#include <windows.h>
#include <stdio.h>

// Variable `display_solution` must be `0` (x) or `1` (y).
int display_solution (int DISPLAY_GET) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int DISPLAY_X, DISPLAY_Y;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    DISPLAY_X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    DISPLAY_Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    if (DISPLAY_GET == '0') {
        return DISPLAY_X;
    } 
    else if (DISPLAY_GET == '1') {
        return DISPLAY_Y;
    }
    else if (DISPLAY_GET != '0' && DISPLAY_GET != '1') {
        printf ("\nERROR 00002\n");
        printf ("ERR_GET_DISPLAY_VALUE\n");
        return 1;
    }
    return 1;
}