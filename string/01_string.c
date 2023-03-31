/*
String refers to sequence of characters, either as a literal constant or as some kind of variable.
*/

#include<stdio.h>

int main() {
    // string in c is basically array of characters (char), terminated with null character "\0".
    char str[] = "Hello World!";

    // The above statement can also be represented as:
    // char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

    puts(str);

    return 0;
}