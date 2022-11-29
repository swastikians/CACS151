#include<stdio.h>

int main()
{
    int l, b, h , vol;
    printf( "Enter the value of length");
    scanf("%d",&l);
    printf("Enter the value of breadth");
    scanf("%d", &b);
    printf("Enter the value of height");
    scanf("%d", &h);

    vol= l*b*h;
    printf("the vol is %d\n",vol);

    return 0;
}
