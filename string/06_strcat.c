#include<stdio.h>
#include<string.h>

int main() {
    char s1[] = "Hello", s2[] = " World!";

    // strcat concatenates two strings together.
    strcat(s1, s2);

    printf("\n%s\n", s1);

    return 0;
}
