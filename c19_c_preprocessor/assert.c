#include <stdio.h>
#include <stdlib.h>

#define ASSERT_ENABLED 1

#ifndef __STDC_IEC_559__
#error I really need IEEE-754 floating point to compile. Sorry!
#endif

#if ASSERT_ENABLED
#define ASSERT(c, m)                                                           \
  do {                                                                         \
    if (!(c)) {                                                                \
      fprintf(stderr, __FILE__ ":%d: assertion %s failed: %s\n", __LINE__, #c, \
              m);                                                              \
      exit(1);                                                                 \
    }                                                                          \
  } while (0)
#else
#define ASSERT(c, m) // Empty macro if not enabled
#endif

int main(void) {
  int x = 30;
  ASSERT(x < 20, "x must be under 20");
}
