#include <stdio.h>

int main() {
    int test[4];

    printf("%zu\n", sizeof test);
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof test / sizeof(int)); //only works in scope where declared, otherwise only first element is shown

    test[0] = 1234;
    test[1] = 2345;
    test[2] = 3456;
    test[3] = 4567;

    for (int i = 0; i < 4; i++) {
        printf("%d\n", test[i]);
    }

    printf("there are %ld many bytes needed for an array of doubles which is %d long\n", sizeof(double [48]), 48);


    int a[5] = {1, 2, 3}; // rest are automated 0

    int b[5] = {1, 2, 3, 0, 0};

    for (int i=0; i < 5; i++) {
        printf("%d\n", a[i]);
        printf("%d\n", b[i]);
    }

    int c[10] = {0, 3, 4, [5]=9, 22, 66}; // fill then after index 5

    for (int i=0; i < 10; i++) {
        printf("%d\n", c[i]);
    }

    #define COUNT 5

    int d[COUNT] = {[COUNT-3] = 3, 2, 1};

    printf("%ld\n", sizeof d);

    int e[3][3] = {[0][0]=1, [1][1]=1, [2][2] = 1};

    for (int i=0; i < 3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }


    return 0;
}