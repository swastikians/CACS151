#include<stdio.h>

int main() {
    FILE *fp = fopen("./fileHandling/store/test1.txt", "r");
    int c;

    if (fp == NULL) {
        fclose(fp);
        printf("\nThat file does not exist!\n");
        return 1;
    }

    while((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);

    return 0;
}
