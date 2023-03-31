#include <stdio.h>
#include <string.h>

/*
strlwr may not be available since it is not a standard function. Below is the custom
implementation of strlwr:
*/
#ifndef strlwr

#include <ctype.h>

char *strlwr(char *str) {
    int len = strlen(str), i;

    for (i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    return str;
}
#endif

int main() {
    char str[] = "HELLO WORLD!";

    // strlwr transforms the given string to lowercase
    strlwr(str);

    puts(str);

    return 0;
}
