#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = malloc(sizeof(int));

  *p = 12;

  printf("%d\n", *p);

  free(p);

  // int *p = malloc(sizeof *p); // *p is an int, so same as sizeof(int)

  // char *p = malloc(3490); // allocate 3490 bytes

  return 0;
}