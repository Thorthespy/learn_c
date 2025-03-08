#include <stdio.h>

extern int alpha; // get from another file, but not working

int main(void) {

  printf("%d\n", alpha); // 37, from bar.c!

  alpha = 99;

  printf("%d\n", alpha); // Same "a" from bar.c, but it's now 99

  return 0;
}