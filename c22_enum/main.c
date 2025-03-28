#include <stdio.h>

enum { ONE = 1, TWO = 2 };

enum { SMALL_SHEEP, MORE_SHEEP, BIG_SHEEP };

enum { x = 4, r = 66, d = 62 };

enum { X = 2, Y = 2, Z = 2 };

enum {
  A,     // 0, default starting value
  B,     // 1
  C = 4, // 4, manually set
  D,     // 5
  E,     // 6
  F = 3, // 3, manually set
  G,     // 4
  H      // 5
} u = E; // var init at declaration

// enum resource { SHEEP, WHEAT, WOOD, BRICK, ORE };

typedef enum { SHEEP, WHEAT, WOOD, BRICK, ORE } RESOURCE;

int main(void) {
  printf("%d %d\n", ONE, TWO);
  printf("%d\n", SHEEP);

  //   enum resource r = BRICK;
  //   if (r == BRICK) {
  //     printf("I'll trade you a brick for two sheep.\n");
  //   }

  RESOURCE r2 = BRICK;
}