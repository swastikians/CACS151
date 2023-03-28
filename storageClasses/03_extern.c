#include<stdio.h>

// initial declaration of the variable which is to be made 'extern'
int x;

int main() {
    extern int x;
 
    // printing the extern variable 'x'
    printf("Value of x before assignment: %d\n", x);
 
    // updating the value of extern variable x
    x = 2;
 
    // print updated extern variable 'x'
    printf("Value of x after assignment: %d\n", x);

    return 0;
}