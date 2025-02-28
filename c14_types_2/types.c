#include <limits.h>
#include <stdio.h>

int main(void) {
  printf("hello world\n");

  // all types are the same
  //   int a;
  //   signed int a;
  //   signed a;

  // all types are the same
  //   unsigned int b;
  //   unsigned b;

  char f = 'F';
  printf("%c or %d\n", f, f);

  //   char a;
  // Could be signed or unsigned
  //   signed char b;
  // Definitely signed
  //   unsigned char c;
  // Definitely unsigned

  //   char a = 10, b = 20;
  //   printf("%d\n", a + b); // 30!

  char a = 10;
  char b = 'B';
  // ASCII value 66
  printf("%d\n", a + b);
  // 76!

  printf("%d\n", INT_MAX);
  printf("%zu\n", sizeof(INT_MAX));

  printf("char max %d, min %d and is unsigned: %d\n", CHAR_MAX, CHAR_MIN,
         CHAR_MAX == UCHAR_MAX);

  //   // These two lines are equivalent:
  //   long long int x;
  //   long long x;
  //   // And so are these:
  //   short int x;
  //   short x;

  printf("%d\n", __FLT_RADIX__); // base 2 or 10, almost 2 for binary everywhere
  printf("%d\n", __FLT_DIG__);   // how many digits a float can have

  return 0;
}