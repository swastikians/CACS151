/*
Unary Operator
++a  :: Pre Increment, increment occurs before value is returned
a++  :: Post Increment, increment occurs after value is returned
--a  :: Pre Decrement, decrement occurs before value is returned
a--  :: Post Decrement, decrement occurs after value is returned
*/

#include<stdio.h>

int main() {
    int a = 10, b;

    // pre increment
    b = ++a;
    printf("\n1. a is %d, b is %d\n", a, b);

    // reset the value of a
    a = 10;

    // post increment
    b = a++;
    printf("\n2. a is %d, b is %d\n", a, b);

    // reset the value of a
    a = 10;

    // pre decrement
    b = --a;
    printf("\n3. a is %d, b is %d\n", a, b);

    // reset the value of a
    a = 10;

    // post decrement
    b = a--;
    printf("\n4. a is %d, b is %d\n", a, b);

    return 0;
}