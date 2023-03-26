// function without argument and with return value
#include<stdio.h>

int getNumber();

int main() {
    int num = getNumber();

    printf("The number is %d\n", num);
    return 0;
}

int getNumber() {
    return 2;
}