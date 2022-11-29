/*
Relational Operators
>  :: Greater Than
<  :: Less Than
>= :: Greater than or equal to
<= :: Less than or equal to
!= :: Is not equal to
== :: Is equal to
*/

#include<stdio.h>


int main() {
    int a = 5, b = 5, c = 10;

    // Equality
    printf("\n%d equals %d = %d\n", a, b, a == b);
    printf("\n%d does not equal %d = %d\n", a, c, a != c);

    // Magnitude
    printf("\n%d is less than %d = %d\n", a, c, a < c);
    printf("\n%d is greater %d = %d\n", c, a, c > a);
    printf("\n%d is less than %d = %d\n", b, c, b < c);
    printf("\n%d is greater %d = %d\n", c, b, c > b);

    return 0;
}