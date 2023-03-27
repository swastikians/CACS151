#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    int b;
    float c;
    double d;
    long l;
    printf("size of char %lu\n",sizeof(a));
    printf("size of int %lu\n",sizeof(b));
    printf("size of float %lu\n",sizeof(c));
    printf("size of double %lu\n",sizeof(d));
    printf("size of long %lu\n",sizeof(l));
    return 0;
}
