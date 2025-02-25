#include <stdio.h>
#include <stdlib.h>

int ARRAY_LENGTH = 20;

int main(void) {

  // create array of 20 floats
  // assign the floats
  // change array of floats to 40 size with realloc and check for NULL
  // print result

  float *p = malloc(sizeof(float) * ARRAY_LENGTH);

  for (int i = 0; i < ARRAY_LENGTH; i++) {
    p[i] = 4096.0 / (i + 1.0);
    printf("%.2f\t", p[i]);
  }

  printf("\n");

  // alternative: realloc(p, sizeof(p) * ARRAY_LENGTH * 2);
  float *q = realloc(p, sizeof(float) * ARRAY_LENGTH * 2);
  if (q == NULL) {
    printf("error p is null");
    return 1;
  }

  // possible reassign p with q
  // p = q;

  // optional: fill rest of array
  for (int i = 0; i < 40; i++) {
    printf("%.2f\t", q[i]);
  }

  free(q);

  return 0;
}