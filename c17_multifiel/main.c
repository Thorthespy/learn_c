#include "side.h"
#include <stdio.h>

// gcc -o main main.c side.h side.c
int main(void) {
  printf("hello %s!\n", userName());
  return 0;
}