#include <stdio.h>

void testFunc(const int t) { printf("%d\n", t); }

int main(void) {
  const int test = 4;

  printf("%d\n", test);

  testFunc(test);
  testFunc(3);

  volatile int *p; // Hey, the thing this points at might change at any time for
  // reasons outside this program code.

  register int a;
  // Make "a" as fast to use as possible.

  for (a = 0; a < 10; a++)
    printf("%d\n", a);

  return 0;
}