#include <stdio.h>
// Combine the first two arguments to a single number,
// then have a commalist of the rest of them:
#define X(a, b, ...) (10 * (a) + 20 * (b)), __VA_ARGS__
#define Y(...) #__VA_ARGS__ // stringify args
#define STR(x) #x
#define PRINT_INT_VAL(x) printf("%s = %d\n", #x, x)
#define CAT(a, b) a##b

#define PRINT_NUMS_TO_PRODUCT(a, b)                                            \
  do {                                                                         \
    int product = (a) * (b);                                                   \
    for (int i = 0; i < product; i++) {                                        \
      printf("%d\n", i);                                                       \
    }                                                                          \
  } while (0) // -> 0 = false

int main(void) {
  printf("%d %f %s %d\n", X(5, 4, 3.14, "Hi!", 12));
  printf("%s\n", Y(1, 2, 3));
  printf("%s\n", STR(3.14159));

  int a = 5;
  PRINT_INT_VAL(a);
  printf("%f\n", CAT(3.14, 1592)); // 3.141592

  PRINT_NUMS_TO_PRODUCT(2, 4);
}