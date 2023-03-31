#include<stdio.h>
#include<string.h>

/*
The strrev function may not be available in string.h since it is not a standard function in C language.
This is a custom implementation of strrev which is executed when string.h does not contain strrev function.
*/

#ifndef strrev

char *strrev(char *str) {
    char *end, *temp = str;

    if (str && *str) {
        end = str + strlen(str) - 1;
        
        while(end > temp) {
            char current = *temp;
            *temp++ = *end;
            *end-- = current;
        }
    }

    return str;
}

#endif

int main() {
    char str[] = "Hello World!";

    strrev(str);

    puts(str);

    return 0;
}
