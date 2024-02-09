#include <stdio.h>

int home (char *argv) {
    printf ("\n1. Open\n");
    printf ("2. New\n");
    printf ("3. Settings\n");
    printf ("4. Exit\n");
    char home_input[4];
    scanf (home_input);
    printf (home_input);
    return 0;
}