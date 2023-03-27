#include<stdio.h>

int main() {
    int i = 0;
 
    for (i = 0; i < 5; i++) {
        // static
        static int y = 5;

        // non-static
        int p = 10;
 
        // Incrementing the value of y and p by 1
        y++;
        p++;
 
        // printing value of i, y & p at each iteration
        printf("\nIteration = %d | y = %d | p = %d", i, y, p);
    }

    return 0;
}