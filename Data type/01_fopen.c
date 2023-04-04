// Program create a file named test1.txt and write some text
#include <stdio.h>
int main () {
FILE *fp;
fp = fopen("test1.txt", "w");
fputs("This is c programming.", fp);
fputs("This is a system programming language.", fp);
fclose(fp);
return 0;
}