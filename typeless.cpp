int VERSION_MAJOR = '0';
int VERSION_MINOR = '0';
int VERSION_PATCH = '1';
int VERSION_TYPE = 0; // 0=Alpha, 1=Beta, 2=Release, 3=LTS

#include "get_display.cpp"
#include "splash.cpp"
#include "home.cpp"
#include <stdio.h>

int main (int argc, char *argv[]) {
    if (splash (VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH, VERSION_TYPE) != 0) {
        return 1;
    }
    int dispx = display_solution (0);
    int dispy = display_solution (1);
    printf ("%d\n", dispx);
    printf ("%d\n", dispy);
    /*if (argv[1] = "NOFILE") {
        if (home (argc) != 0) {
        return 1;
        }
    }*/
    return 0;
}