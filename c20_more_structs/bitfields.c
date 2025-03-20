#include <stdio.h>

struct foo {
  unsigned int a;
  unsigned int b;
  unsigned int c;
  unsigned int d;
};

struct foo2 {
  // needed to be next to each other if contained non bit fields
  // declare as signed or unsigned
  unsigned int a : 5;
  unsigned int b : 5;
  unsigned int c : 3;
  unsigned int d : 3;
};

struct foo {
  unsigned char a : 2;
  // unnamed bit-field!, can not be used
  unsigned char : 5;
  unsigned char b : 1;
};

struct foo {
  unsigned int a : 1;
  unsigned int b : 2;
  unsigned int : 0; // <--Zero-width unnamed bit-field, leads to packing a+b and
                    // c+d together
  unsigned int c : 3;
  unsigned int d : 4;
};

int main(void) {
  printf("%zu\n", sizeof(struct foo));
  printf("%zu\n", sizeof(struct foo2));
}