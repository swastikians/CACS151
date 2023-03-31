#include <stdio.h>
#include <string.h>

/*
strupr may not be available since it is not a standard function. Below is the custom implementation of strupr: 
*/
#ifndef strupr

#include<ctype.h>

char *strupr(char *str) {
    int len = strlen(str), i;

    for (i = 0; i < len; i++) {
        str[i] = toupper(str[i]);
    }

    return str;
}
#endif

int main() {
    char str[] = "Hello World!";

    // strupr transforms the given string to UPPERCASE
    strupr(str);

    puts(str);

    return 0;
}
