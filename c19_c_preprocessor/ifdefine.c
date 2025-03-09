#include <stdio.h>

#define EXTRA_HAPPY

#define HAPPY_FACTOR 1

int main(void) {

#ifdef EXTRA_HAPPY
  printf("I'm extra happy!\n");
#endif

#ifndef EXTRA_HAPPY
  printf("I'm just regular\n");
#endif

#ifdef EXTRA_HAPPY
  printf("I'm extra happy!\n");

#else
  printf("I'm just regular\n");
#endif

#ifdef MODE_1
  printf("This is mode 1\n");
#elifdef MODE_2
  printf("This is mode 2\n");
#elifdef MODE_3
  printf("This is mode 3\n");
#else
  printf("This is some other mode\n");
#endif

#if HAPPY_FACTOR == 0
  printf("I'm not happy!\n");
#elif HAPPY_FACTOR == 1
  printf("I'm just regular\n");
#else
  printf("I'm extra happy!\n");
#endif

#if 0
printf("All this code"); /* is effectively */
printf("commented out"); // by the #if 0
#endif

#define GOATS

#ifdef GOATS
  printf("Goats detected!\n"); // prints
#endif

#undef GOATS
  // Make GOATS no longer defined
#ifdef GOATS
  printf("Goats detected, again!\n"); // doesn't print
#endif

  printf("OK!\n");

  printf("This function: %s\n", __func__);
  printf("This file: %s\n", __FILE__);
  printf("This line: %d\n", __LINE__);
  printf("Compiled on: %s %s\n", __DATE__, __TIME__);
  printf("C Version: %ld\n", __STDC_VERSION__);

  // #if __STDC_VERSION__ >= 1999901L -> check is c version is at least c99
}