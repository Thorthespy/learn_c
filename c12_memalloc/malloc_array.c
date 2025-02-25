#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  // Allocate space for 10 ints
  int *p = malloc(sizeof(int) * 10);

  // Assign them values 0-45:
  for (int i = 0; i < 10; i++)
    p[i] = i * 5;

  // Print all values 0, 5, 10, 15, ..., 40, 45
  for (int i = 0; i < 10; i++)
    printf("%d\t", p[i]);

  printf("\n");
  // Free the space
  free(p);

  // Allocate space for 10 ints with calloc(), initialized to 0:
  int *q = calloc(10, sizeof(int));
  for (int i = 0; i < 10; i++)
    printf("%d\t", q[i]);

  printf("\n");
  // Free the space
  free(q);

  // Allocate space for 10 ints with malloc(), initialized to 0:
  int *r = malloc(10 * sizeof(int));
  memset(r, 0, 10 * sizeof(int)); // set to 0

  for (int i = 0; i < 10; i++)
    printf("%d\t", r[i]);

  printf("\n");
  // Free the space
  free(r);

  return 0;
}