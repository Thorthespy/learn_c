#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *s = "34x90";
  // "x" is not a valid digit in base 10!
  char *badchar;
  // Convert string s, a number in base 10, to an unsigned long int.
  unsigned long int x = strtoul(s, &badchar, 10);

  // It tries to convert as much as possible, so gets this far:
  printf("%lu\n", x); // 34
  // But we can see the offending bad character because badchar
  // points to it!
  printf("Invalid character: %c\n", *badchar);
  // "x"

  char *s2 = "34f90";
  // "x" is not a valid digit in base 10!
  char *badchar2;
  // Convert string s, a number in base 10, to an unsigned long int.
  unsigned long int x2 = strtoul(s2, &badchar2, 10);
  // Check if things went well
  if (*badchar2 == '\0') {
    printf("Success! %lu\n", x2);
  } else {
    printf("Partial conversion: %lu\n", x2);
    printf("Invalid character: %c\n", *badchar2);
  }

//   char c = '6';
//   int x3 = c;      // x has value 54, the code point for '6'
//   int y = c - '0'; // y has value 6, just like we want

//   int x = 6;
//   char c = x + '0';
//   // c has value 54
//   printf("%d\n", c);
//   // prints 54
//   printf("%c\n", c);
//   // prints 6 with %c

  return 0;
}