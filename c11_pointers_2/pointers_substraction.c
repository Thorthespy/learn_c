#include <stdio.h>

int my_strlen(char *s) {
  char *p = s;

  while (*p != '\0') {
    p++;
  }

  return p - s;
}

int main(void) {
  int a[6] = {11, 22, 33, 44, 55, 999};
  int *p = &a[0]; // Or "int *p = a;" works just as well

  while (*p != 999) {
    printf("%d\n", *p);
    p++;
  }

  printf("string length: %d\n", my_strlen("hello, world!"));

  return 0;
}