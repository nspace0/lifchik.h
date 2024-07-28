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

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  unsigned char *ptrDest = (unsigned char *)dest;
  const unsigned char *ptrSrc = (const unsigned char *)src;
  while (n--) *ptrDest++ = *ptrSrc++;
  return dest;
}

int main() {
  char buffer[100];
  float pi = 3.14159;
  sprintf(buffer, "The value of pi is %.2f.", pi);
  printf("%s\n", buffer);
  return 0;
}
