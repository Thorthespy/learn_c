#include <stdio.h>

int main(void) {

    // printf("hello world\n");
    // fprintf(stderr, "i am an error\n"); // ./file_io > output.txt 2> errors.txt // This command is Unix-specific

    FILE *fp;
    int c;

    fp = fopen("hello.txt", "r");

    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    

    fclose(fp);
 
    return 0;
}