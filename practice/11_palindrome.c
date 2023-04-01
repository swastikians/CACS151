// Program to check weather the number is palindrome or not ;

#include <stdio.h>

int main() {
    int num, sum = 0, rem, temp;
    printf("Enter any number");
    scanf("%d", &num);
    temp = num;

    while (num > 0) {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num = num / 10;
    }
    
    if (sum == temp) {
        printf("The number is Palindrome");
    } else {
        printf("The number is not palindrome");
    }

    return 0;
}
