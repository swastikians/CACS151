#include<stdio.h>

int main() {
    float p, t, r, si;

    printf("Enter the value of P: ");
    scanf("%f", &p);
    printf("Enter the value of T: ");
    scanf("%f", &t);
    printf("Enter the value of R: ");
    scanf("%f", &r);

    si = (p*t*r) / 100;

    printf("Simple Interest is %f\n", si);

    return 0;
}
