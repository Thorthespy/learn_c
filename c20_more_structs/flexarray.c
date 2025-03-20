#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct len_string {
  int length;
  int test;
  char data[];
};

struct len_string *len_string_from_c_string(char *s) {
  int len = strlen(s);
  // Allocate "len" more bytes than we'd normally need
  struct len_string *ls = malloc(sizeof *ls + len);
  ls->length = len;
  // Copy the string into those extra bytes
  memcpy(ls->data, s, len);
  return ls;
}

int main(void) {
  struct len_string *ls = len_string_from_c_string("hell0");
  printf("%d length, %zu org length, %zu new length\n", ls->length,
         sizeof(struct len_string), sizeof(ls));
  printf("%zu\n", sizeof(int));
  printf("%zu\n",
         sizeof(struct len_string)); // padding bytes in struct can occur,
  // depends on compiler
  printf("%zu\n", offsetof(struct len_string, length));
  printf("%zu\n", offsetof(struct len_string, test));
}