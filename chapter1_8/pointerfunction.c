#include <stdio.h>

void increment (int*);

int main(void) {

    int number = 5;
    printf("number %d\n", number);

    increment(&number);

    printf("number %d\n", number);

    return 0;
}

void increment(int* number) {
    *number = *number + 1;
}