#include <stdio.h>
#include <threads.h>

int main(void) {
  for (int i = 10; i >= 0; i--) {
    printf("\rT minus %d second%s... ", i, i != 1 ? "s" : "");

    fflush(stdout);

    thrd_sleep(&(struct timespec){.tv_sec = 1}, NULL);
  }
  printf("\rLiftoff!             \n");
}