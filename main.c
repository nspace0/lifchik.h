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

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  if (str1 == NULL || str2 == NULL) {
    errno = EINVAL;
    return 0;
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



int main() {
  int len;
  // Intializing string(Unmatched Characters)
  const char str1[] = "Tutorialspoint";
  const char str2[] = "ETextbook";

  len = s21_strcspn(str1, str2);

  printf("First matched character is at %d\n", len);
  return 0;
}
