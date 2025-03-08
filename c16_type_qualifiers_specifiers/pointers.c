#include <stdio.h>

int main(void) {

  // value can not be changed, pointer can.
  int x[] = {10, 20};
  const int *p = x;
  p++; // We can modify p, no problem
  //   *p = 30; // Compiler error! Can't change what it points to

  // pointer can not be changed, value can;
  int *const p2;
  // We can't modify "p" with pointer arithmetic
  //   p2++;  // Compiler error!

  int x2 = 10;
  int *const p3 = &x2;
  *p3 = 20;
  // Set "x" to 20, no problem

  const int *const p4; // Can't modify p or *p!

  return 0;
}