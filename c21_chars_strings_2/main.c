#include <stdio.h>

int main(void) {
  char t = '\'';
  printf("%c\a\n", t);

  printf("Doesn't it?\?!\n");
  printf("Doesn't it??!\n"); // trigraph ??! converted to | [-Wtrigraphs], but
                             // not active

  printf("A\102C\n"); // 102 is `B` in ASCII/UTF-8
  printf("\xE2\x80\xA2 Bullet 1\n");
  printf("\xE2\x80\xA2 Bullet 2\n");
  printf("\xE2\x80\xA2 Bullet 3\n");

  printf("\u2022 Bullet 1\n");
  printf("\u2022 Bullet 2\n");
  printf("\u2022 Bullet 3\n");
}