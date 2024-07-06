#include <stdio.h>
#include <string.h>
//#include "s21_string.h"
typedef long unsigned s21_size_t;

s21_size_t s21_strlen(const char *str);
void *s21_memset(void *string, int c, s21_size_t n) {
  unsigned char *p = (unsigned char *)string;
  while (n > 0) {
    *p = (unsigned char)c;
    n--;
    p++;
  }
  return string;
}

int main() {
  char a[256];
  char b[256];
  s21_memset(a, 'H', 10);
  memset(b, 'H', 10);

  printf("s21_memset: %s\n", a);
  printf("memset: %s\n", b);

  s21_memset(a, '0', 10);
  memset(b, '0', 10);

  printf("s21_memset: %s\n", a);
  printf("memset: %s\n", b);

  s21_memset(a, '7', 10);
  memset(b, '7', 10);

  printf("s21_memset: %s\n", a);
  printf("memset: %s\n", b);

  return 0;
}

s21_size_t s21_strlen(const char *str) {
  s21_size_t len = 0;
  for (; str[len]; len++)
    ;
  return len;
}