#include <windows.h>

int init () {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int DISPLAY_X, DISPLAY_Y;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    DISPLAY_X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    DISPLAY_Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    printf("columns: %d\n", columns);
    printf("rows: %d\n", rows);
    return 0;
}