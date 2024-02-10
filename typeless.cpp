int VERSION_MAJOR = '0';
int VERSION_MINOR = '0';
int VERSION_PATCH = '1';
int VERSION_TYPE = 0; // 0=Alpha, 1=Beta, 2=Release, 3=LTS

#include "init.cpp"
#include "splash.cpp"
#include "home.cpp"

int main (int argc, char *argv[]) {
    init ();
    if (splash (VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH, VERSION_TYPE) != 0) {
        return 1;
    }
    if (argv[1] = "NOFILE") {
        if (home (argc) != 0) {
        return 1;
        }
    }
    return 0;
}