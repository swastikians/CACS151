#include<stdio.h>

int main() {
    char str[6] = "Hello";
    char *ptr = str;

    while(*ptr != '\0') {
        printf("%c\n", *ptr);
        ptr++;
    }

    return 0;
}