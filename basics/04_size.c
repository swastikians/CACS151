#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    int b;
    float c;
    double d;
    long l;
    printf("size of char %lu\n",sizeof(a)); //size of char 1  
    printf("size of int %lu\n",sizeof(b));//size of int 4   
    printf("size of float %lu\n",sizeof(c));//ize of float 4
    printf("size of double %lu\n",sizeof(d));//size of double 8
    printf("size of long %lu\n",sizeof(l));//size of long 4 
    return 0;
}
