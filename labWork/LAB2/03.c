// program to check if the given number is a palindrome or not

#include <stdio.h>

int main() {
    int num, sum = 0, rem, temp;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        sum = (sum * 10) + rem;
        temp = temp / 10;
    }
    
    if (sum == num) {
        printf("\nThe number %d is a palindrome\n", num);
    } else {
        printf("\nThe number %d is not a palindrome\n", num);
    }

    return 0;
}