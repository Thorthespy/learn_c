#include <stdio.h>

// this is new in c23 and maybe not included actual, currently not working
int main(void) {
  //   int a[] = {
  // #embed "foo.bin"
  //   };
  // same
  //   int a[] = {11, 22, 33, 44};

  //   int a[] = {
  // #embed "/dev/random" limit(5)
  //   };

  //   int x =
  // #embed "foo.dat" if_empty(999)
  // ;

  //   int x[] = {
  // #embed "/dev/urandom" limit(3) prefix(11, ) suffix(, 99)
  //   };

  //   int random_nums[] = {
  //     #if __has_embed("/dev/urandom")
  //     #embed "/dev/urandom" limit(5)
  //     #elif __has_embed("myrandoms.dat")
  //     #embed "myrandoms.dat" limit(5)
  //     #else
  //     140,178,92,167,120
  //     #endif
  //     };
}