#include <stdio.h>

int main(void) {

    FILE *fp;

    unsigned char c;

    fp = fopen("output.bin", "rb");

    while(fread(&c, sizeof(char), 1, fp) > 0) { // arguments: location to parse, size of thing to parse, how many, file location
        printf("%d\n", c);
    }

    fclose(fp);
    

    return 0;
}