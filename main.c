#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "s21_string.h"
typedef long unsigned s21_size_t;
s21_size_t s21_strlen(const char *string) {
  const char *end = string;

  while (*end != '\0') {
    ++end;
  }

  return end - string;
}

void *s21_memchr(const void *string, int c, s21_size_t n) {
  const unsigned char *ptr = (const unsigned char *)string;
  unsigned char ch = (unsigned char)c;

  while (n--) {
    if (*ptr == ch) return (void *)ptr;

    ptr++;
  }
  return NULL;
}

int main() {
  const char str[] = "Tutorialspoint";
  const char ch = '\0';
  char *ret;
  ret = s21_memchr(str, ch, s21_strlen(str));
  printf("string after |%c| is - |%s|\n", ch, ret);

  return 0;
}
