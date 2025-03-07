#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 10;
  long int y = (long int)x + 12;

  printf("%lu\n", y);

  int ux = 3490;
  int *p = &ux;
  printf("%p\n", (void *)p);
  return 0;
}