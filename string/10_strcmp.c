#include<stdio.h>
#include<string.h>

/*
strcmp compares the given strings and returns the result as 0< or 0 or >0.
If s1 is greater than s2, the result is a number >0
If s1 is less than s2, the result is a number 0<
If s1 is equal to s2, the result is 0
*/

int main() {
    char a1[] = "abc", a2[] = "def";
    char b1[] = "abc", b2[] = "abc";
    char c1[] = "def", c2[] = "abc";
    
    int result;

    // a1 < a2
    result = strcmp(a1, a2);
    printf("\na1 & a2 result: %d\n", result);

    // b1 = b2
    result = strcmp(b1, b2);
    printf("\nb1 & b2 result: %d\n", result);

    // c1 > c2
    result = strcmp(c1, c2);
    printf("\nc1 & c2 result: %d\n", result);

    return 0;
}
