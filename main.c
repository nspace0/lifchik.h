#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "s21_string.h"
typedef long unsigned s21_size_t;


int main() {
  char str[] = "Эта программа написана в Linux Ubuntu";
  printf("%s", strstr(str, "а"));

  return 0;
}
