#include <stdio.h>

int test(int);

int main(void) {

    int number = 4;

    int res = test(number);

    printf("number %d\n", res);

    return 0;
}

int test(int number) {
    printf("hello world %d\n", number);
    return 0;
}
