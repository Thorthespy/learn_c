#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int result = 0;
  for (int i = 1; i < argc;
       i++) { // start at 1 because first arg is program name
    int number = atoi(argv[i]);
    result += number;
  }

  printf("result: %d\n", result);

  return 0;
}