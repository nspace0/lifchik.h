#include "s21_string.h"

s21_size_t s21_strcpn(const char *str1, const char *str2) {
  if (str1 == NULL || str2 == NULL) {
    errno = EINVAL;  // delete
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
