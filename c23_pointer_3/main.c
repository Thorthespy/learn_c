#include <stdio.h>

int main(void) {
  int x = 3490;
  int *p = &x;
  int **q = &p;

  // int x = 3490;
  // int *const p = &x;
  // int *const *q = &p; //make sure that const is there
  // int *const *const q = &p;

  printf("%d %d\n", *p, **q);
}