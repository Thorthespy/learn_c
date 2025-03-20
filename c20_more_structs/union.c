#include <stdio.h>

// in union, only one field at the time can be used. size is largest
union foo {
  int a, b, c, d, e, f;
  float g, h;
  char i, j, k, l;
};

union foo2 {
  struct { // unnamed!
    int x, y;
  } a;
  struct { // unnamed!
    int z, w;
  } b;
};

int main(void) {
  union foo x;

  int *foo_int_p = (int *)&x;

  float *foo_float_p = (float *)&x;

  x.a = 12;

  printf("%d\n", x.a); // 12

  printf("%d\n", *foo_int_p); // 12, again

  x.g = 3.141592;

  printf("%f\n", x.g); // 3.141592

  printf("%f\n", *foo_float_p); // 3.141592, again

  union foo x2;
  int *foo_int_p2 = (int *)&x2;           // Pointer to int field
  union foo *p = (union foo *)foo_int_p2; // Back to pointer to union
  p->a = 12;                              // This line the same as...
  x2.a = 12;                              // this one.

  union foo2 f;
  f.a.x = 1;
  f.a.y = 2;
  f.b.z = 3;
  f.b.w = 4;
}