#include <stdio.h>
//#include "s21_string.h"
typedef long unsigned s21_size_t;

s21_size_t s21_strlen(const char *str) {}

int main() {
  char a[256] = "ibrahimbulguchevsuper06";
  s21_size_t aa = s21_strlen(a);

  printf("%lu", aa);
  return 0;
}