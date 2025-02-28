#include <stdio.h>

int main(void) {
  int a = 0x1A2B;  // Hexadecimal
  int b = 0x1a2b;  // Case doesn't matter for hex digits
  printf("%x", a); // Print a hex number, "1a2b"

  int c = 012;
  printf("%o\n", a); // Print an octal number, "12"

  //   int x = 1234;
  //   long int x = 1234L;
  //   long long int x = 1234LL;
  //   unsigned int x = 1234U;
  //   unsigned long int x = 1234UL;
  //   unsigned long long int x = 1234ULL;

  //   float x = 3.14f;
  //   double x = 3.14;
  //   long double x = 3.14L;

  printf("%e\n", 123456.0); // Prints 1.234560e+05

  double x = 0xa.1p3;
  printf("%a\n", x); // 0x1.42p+6 - floating hex
  printf("%f\n", x); // 80.500000
}