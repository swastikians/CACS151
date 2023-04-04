#include<stdio.h>

int main() {
    int c;

    FILE *src = fopen("./fileHandling/store/test1.txt", "r");

    if (src == NULL) {
        fclose(src);
        printf("\nCould not open source file\n");
        return 0;
    }

    FILE *dest = fopen("./fileHandling/store/test2.txt", "w");

    while((c = fgetc(src)) != EOF) {
        fputc(c, dest);
    }

    fclose(src);
    fclose(dest);

    return 0;
}
