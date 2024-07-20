#include <errno.h>
#include <stddef.h>
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

  s21_size_t result = 0;
  int flags[256] = {0};

  for (const char *p = str2; *p != '\0'; p++) {
    flags[(unsigned char)*p] = 1;
  }

  for (const char *p = str1; *p != '\0'; p++) {
    if (flags[(unsigned char)*p]) {
      return result;
    }
    result++;
  }

  return result;
}
s21_size_t s21_strcspn(const char *str1, const char *str2) {
  
}



int main() {
  const char *str1 = "Hello, world!";
    const char *str2 = "aeiou";

    size_t result = strcspn(str1, str2);
    printf("The first vowel in '%s' is at position %zu.\n", str1, result);

  len = s21_strcspn(str1, str2);

  printf("First matched character is at %d\n", len);
  return 0;
}
