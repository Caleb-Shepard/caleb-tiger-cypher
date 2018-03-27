// Written by Tiger Sachse
#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv) {
    int i;
    char buffer;

    i = 0;
    while ((buffer = argv[1][i]) != '\0') {
        if (buffer == 'u' || buffer == 'U') {
            printf("V");
        }
        else if (buffer == 'w' || buffer == 'W') {
            printf("VV");
        }
        else if (buffer == 'j' || buffer == 'J') {
            printf("I");
        }
        else {
            printf("%c", toupper(buffer));
        }
        i++;
    }

    return 0;
}
