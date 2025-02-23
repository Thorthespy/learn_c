#include <stdio.h>

int main(void) {
  int a[5] = {11, 22, 33, 44, 55};
  int *p = &a[0]; // Or "int *p = a;" works just as well
  for (int i = 0; i < 5; i++) {
    printf("%d\n", *(p + i)); // Same as p[i]!
  }

  // example:
  // int x = 3450; address of x is 23222333202 int *pX = &x; pX = 23222333202;
  //  when array next element (pX + 1), then pointer is at 23222333202 + 8 (int
  //  size is 8) so address is 23222333210
  // a[b] == *(a + b)

  return 0;
}