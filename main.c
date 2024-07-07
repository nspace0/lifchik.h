#include <stdio.h>
#include <string.h>
//#include "s21_string.h"
typedef long unsigned s21_size_t;

s21_size_t s21_strlen(const char *str) {
  s21_size_t len = 0;
  for (; str[len]; len++)
    ;
  return len;
}
void *s21_memset(void *string, int c, s21_size_t n) {
  unsigned char *p = (unsigned char *)string;
  while (n > 0) {
    *p = (unsigned char)c;
    n--;
    p++;
  }
  return string;
}

char *s21_strncat(char *destination, const char *source, s21_size_t n) {
  char *ptr = destination;

  while (*ptr != '\0') {
    ptr++;
  }

  while (n-- && *source != '\0') {
    *ptr++ = *source++;
  }
  *ptr = '\0';

  return destination;
}

int main() {
  char a[256];
  char b[256];

  strcpy(a, "This is source");
  strcpy(b, "This is destination");

  s21_strncat(b, a, 10);
  // strncat(b, a, 10);

  printf("result: %s\n", b);
  printf("len: %ld\n", strlen(b));

  return 0;
}
