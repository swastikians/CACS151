#include <stdio.h>

// Recursive function to calculate the sum of natural numbers
int sumOfNaturalNumbers(int n)
{
    // Base case: if n is 0, return 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: calculate sum of numbers up to n-1 and add n to it
    else {
        return n + sumOfNaturalNumbers(n-1);
    }
}

int main()
{
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Call the recursive function to calculate the sum of natural numbers
    sum = sumOfNaturalNumbers(n);

    printf("Sum of natural numbers up to %d = %d", n, sum);

    return 0;
}
