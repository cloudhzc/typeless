#include <stdio.h>

void splash (int VERSION_MAJOR, int VERSION_MINOR, int VERSION_PATCH, int VERSION_TYPE) {
    char VERSION_MAJOR_STR[2];
    sprintf (VERSION_MAJOR_STR, "%d", VERSION_MAJOR);
    const char* result = VERSION_MAJOR_STR;
    char VERSION_MINOR_STR[2];
    sprintf (VERSION_MINOR_STR, "%d", VERSION_MINOR);
    const char* result = VERSION_MINOR_STR;
    char VERSION_PATCH_STR[2];
    sprintf (VERSION_PATCH_STR, "%d", VERSION_PATCH);
    const char* result = VERSION_PATCH_STR;
    printf ("Typeless v");
    printf (VERSION_MAJOR);
    printf (".");
    printf (VERSION_MINOR);
    printf (".");
    printf (VERSION_PATCH);
    printf (" ");
    if (VERSION_TYPE == 0) {
        printf ("Alpha\n");
    }
    else if (VERSION_TYPE == 1) {
        printf ("Beta\n");
    }
    else if (VERSION_TYPE == 2) {
        printf ("Release\n");
    }
    else if (VERSION_TYPE == 3) {
        printf ("LTS\n");
    }
    else {
        printf ("ERROR 00001\n");
        printf ("ERR_VERSION_TYPE\n");
    }
    printf ("\n");
    // example: Typeless v0.0.1 Alpha
}