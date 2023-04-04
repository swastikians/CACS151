#include <stdio.h>

union Data {
    int i;
    char str;
    float f;
};

int main() {
    union Data data;

    data.i = 10;
    printf("\ndata.i = %d\n", data.i);

    data.str = 'C';
    printf("\ndata.str = %c\n", data.str);

    data.f = 25.78;
    printf("\ndata.f = %.2f\n", data.f);

    // this gives a garbage value since union was mutated
    printf("\n[garbage] data.i = %d\n", data.i);

    return 0;
}
