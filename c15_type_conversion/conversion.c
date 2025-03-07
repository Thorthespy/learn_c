#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char s[10];
  float f = 3.14159;
  // Convert "f" to string, storing in "s", writing at most 10 characters
  // including the NUL terminator
  snprintf(s, 10, "%f", f);
  printf("String value: %s\n", s);
  // String value: 3.141590

  char *pi = "3.14159";
  float g = atof(pi);
  printf("%f\n", g);

  char *st = "3490";
  // Convert string s, a number in base 10, to an unsigned long int.
  // NULL means we don't care to learn about any error information.
  unsigned long int x = strtoul(st, NULL, 10);
  printf("%lu\n", x); // 3490

  char *sb = "101010"; // What's the meaning of this number?
  // Convert string s, a number in base 2, to an unsigned long int.

  unsigned long int y = strtoul(sb, NULL, 2);
  printf("%lu\n", y); // 42

  char *sc = "12"; // hexadecimal

  unsigned long int z = strtoul(sc, NULL, 6);
  printf("%lu\n", z); // 42

  return 0;
}