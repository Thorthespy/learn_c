#include <stdio.h>
#include <string.h>

int my_strlen(char *s) {
    int count = 0;
    while (s[count] != '\0')
        count++;
    return count;
}

int main(void) {
    char *s = "Hello world";
    char s2[13] = "Hello world";
    char s3[] = "Hello world";

    printf("%s\n%s\n%s\n", s, s2, s3);

    for (int i=0;i<13;i++) {
        printf("%c\n", s[i]);
    }

    char t[] = "Hello World!";

    t[3] = 'd';

    printf("%s\n", t);

    // printf("the string '%s' is %zu bytes long.\n", t, strlen(t));

    // printf("the string '%s' is %d bytes long.\n", t, my_strlen(t));

    char org[] = "Hello!";
    char cop[sizeof(org)];

    strcpy(cop, org);

    cop[0] = 'f';

    printf("%s\n", org);
    printf("%s\n", cop);

    return 0;
}