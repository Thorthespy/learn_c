#include <stdio.h>

int main(void) {

    FILE *fp;
    int x = 32;

    fp = fopen("writer.txt", "w"); //fp = stdout; if output to console

    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d\n", x);
    fputs("Hello, world!\n", fp);

    fclose(fp);
    

    return 0;
}