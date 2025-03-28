#include <stdio.h>

int add(int a, int b) { return a + b; }

int mult(int a, int b) { return a * b; }

//                     op                         x      y
//              |-----------------------------| |---|  |---|
void print_math(int (*mathOperation)(int, int), int x, int y) {
  int result = mathOperation(x, y);

  printf("%d\n", result);
}

void printInt(int number) { printf("%d\n", number); }

int main(void) {
  void (*pFunc)(int) = printInt;
  pFunc(3490);

  print_math(add, 3, 7);
  print_math(mult, 3, 4);
}