#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p = NULL;
  int length = 0;
  while (length < 50) {
    // Allocate 10 more ints:
    length += 10;

    // these are the same
    // char *p = malloc(3490);
    // char *p = realloc(NULL, 3490);

    p = realloc(p, sizeof *p * length);
    // Do amazing things
    // ...
  }

  return 0;
}