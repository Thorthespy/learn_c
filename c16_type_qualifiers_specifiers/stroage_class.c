#include <stdio.h>

void counter(void) {

  static int count = 1; // static value default is 0;
  // This is initialized one time

  printf("This has been called %d time(s)\n", count);

  count++;
}

int main(void) {
  {
    // the same storage specifier because auto is default
    int a;
    auto int b;
  }

  counter();
  // "This has been called 1 time(s)"

  counter();
  // "This has been called 2 time(s)"

  counter();
  // "This has been called 3 time(s)"

  counter();
  // "This has been called 4 time(s)"
  return 0;
}

// static functions file scope, extern by default.