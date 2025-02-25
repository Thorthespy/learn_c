#include <stdio.h>

int d = 4;

void add(int number) { printf("%d", d + number); }

void sub(int number) { printf("%d", d - number); }

int main(void) {
  int a = 12; // Local to outer block, but visible in inner block

  if (a == 12) {
    int b = 99;              // Local to inner block, not visible in outer block
    printf("%d %d\n", a, b); // OK: "12 99"
  }

  printf("%d\n", a); // OK, we're still in a's scope

  // printf("%d\n", b); // ILLEGAL, out of b's scope

  int i = 0;

  printf("%d\n", i); // OK: "0"

  // printf("%d\n", j); // ILLEGAL--can't use j before it's defined

  int j = 5;

  printf("%d %d\n", i, j); // OK: "0 5"

  add(5);
  sub(3);

  return 0;
}
