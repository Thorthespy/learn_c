#include <stdio.h>
#include <stdlib.h>

int main() {
  int *x;

  x = malloc(sizeof(int) * 10);

  if (x == NULL) {
    printf("Error allocating memory");
    return 1;
  }

  if ((x = malloc(sizeof(int) * 10)) == NULL) {
    printf("error allocating memory");
    return 1;
  }

  return 0;
}