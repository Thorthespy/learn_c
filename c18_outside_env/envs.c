#include <stdio.h>
#include <stdlib.h>

// alternatives but UNIX exclusive
// int main(int argc, char **argv, char **env)
// extern char **environ;

int main(void) {
  char *val = getenv("HELLO");

  if (val == NULL) {
    printf("env HELLO not set\n");
    return EXIT_FAILURE;
  }

  printf("Value: %s\n", val);
}