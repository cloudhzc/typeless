int VERSION_MAJOR = '0';
int VERSION_MINOR = '0';
int VERSION_PATCH = '1';
int VERSION_TYPE = 0; // 0=Alpha, 1=Beta, 2=Release, 3=LTS

#include "splash.cpp"

int main () {
    splash (VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH, VERSION_TYPE);
    return 0;
}