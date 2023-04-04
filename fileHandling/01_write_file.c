#include<stdio.h>

int main() {
    FILE *fp;

    fp = fopen("./fileHandling/store/test1.txt", "w");

    fputs("Hello World!\n", fp);
    fputs("C Programming - File System", fp);

    fclose(fp);

    return 0;
}
