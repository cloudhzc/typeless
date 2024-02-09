#include <stdio.h>

int splash (int VERSION_MAJOR, int VERSION_MINOR, int VERSION_PATCH, int VERSION_TYPE) {
    VERSION_MAJOR = VERSION_MAJOR - 48;
    VERSION_MINOR = VERSION_MINOR - 48;
    VERSION_PATCH = VERSION_PATCH - 48;
    char VERSION_MAJOR_STR[4];
    sprintf (VERSION_MAJOR_STR, "%d", VERSION_MAJOR);
    char VERSION_MINOR_STR[4];
    sprintf (VERSION_MINOR_STR, "%d", VERSION_MINOR);
    char VERSION_PATCH_STR[4];
    sprintf (VERSION_PATCH_STR, "%d", VERSION_PATCH);
    printf ("Typeless v");
    printf (VERSION_MAJOR_STR);
    printf (".");
    printf (VERSION_MINOR_STR);
    printf (".");
    printf (VERSION_PATCH_STR);
    printf (" ");
    if (VERSION_TYPE == 0) {
        printf ("Alpha\n");
        return 0;
    }
    else if (VERSION_TYPE == 1) {
        printf ("Beta\n");
        return 0;
    }
    else if (VERSION_TYPE == 2) {
        printf ("Release\n");
        return 0;
    }
    else if (VERSION_TYPE == 3) {
        printf ("LTS\n");
        return 0;
    }
    else {
        printf ("\nERROR 00001\n");
        printf ("ERR_VERSION_TYPE\n");
        return 1;
    }
    // example: Typeless v0.0.1 Alpha
}