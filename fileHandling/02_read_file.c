#include<stdio.h>

int main() {
    FILE *fp;
    char c[100];
    int size = sizeof(c) / sizeof(c[0]);

    fp = fopen("./fileHandling/store/test1.txt", "r");

    fgets(c, size, fp);

    puts(c);

    fclose(fp);

    return 0;
}
