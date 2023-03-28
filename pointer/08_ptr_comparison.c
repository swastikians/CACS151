#include <stdio.h>

const int MAX = 3;

void main () {
   int var[] = {10, 100, 200};
   int i, *ptr;
   ptr = var;
   i = 0;
   while ( ptr <= &var[MAX - 1] ) {
      printf("Address of var[%d] = %u\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );
      ptr++;
      i++;
   }
}
