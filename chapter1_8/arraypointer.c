#include <stdio.h>

void times2(int *a, int len) { // pass array, but it is currently 
    // printf("%p\n", a);
    // printf("%d\n", a[0]);
    // printf("%p\n", &a[0]);
    // printf("%d\n", *a);


    for(int i=0; i<len; i++) {
        printf("%d\n", a[i] * 2);
    }
}

void times2_v2(int *a, int len) {
    for(int i=0; i<len; i++) {
        a[i] *= 2;
    }
}

void print_2D_array(int a[][3]) {
    for (int row=0; row < 2; row++) {
        for (int col=0; col<3; col++) {
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
}

void times3(int a[], int len) {
    for(int i=0; i<len; i++) {
        printf("%d\n", a[i] * 3);
    }
}

void times4(int a[55], int len) {
    for(int i=0; i<len; i++) {
        printf("%d\n", a[i] * 4);
    }

}

int main(void) {

    // int a[5] = {11, 22, 33, 44, 55};
    int b[2][3] = {
        {2,3,4},
        {5,6,7}
    };
    // int *p;
    // int *p2;

    // p = &a[0];
    // p2 = a;

    // printf("%d\n", *p);
    // printf("%d\n", *p2);

    // times2(a, 5);
    // times3(a, 5);
    // times4(a, 5);

    // int test = 1;
    // int *ptest;

    // ptest = &test;

    // times2(ptest, 5);

    // for(int i=0; i<5; i++) {
    //     printf("%d\n", a[i]);
    // }

    // times2_v2(a, 5);

    // for(int i=0; i<5; i++) {
    //     printf("%d\n", a[i]);
    // }

    print_2D_array(b);

    return 0;
}