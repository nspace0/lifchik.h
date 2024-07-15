#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "s21_string.h"
typedef long unsigned s21_size_t;

char *s21_strrchr(const char *string, int c) {
  c = (unsigned char)c;
  const char *ptr = NULL;

  while (*string) {
    if (*string == c) {
      ptr = string;
    }
    string++;
  }
  
  if (c == '\0') {
    return (char *)string;
  }

  return (char *)ptr;
}

int main() {
  const char str[] = "https://www.tutorialspoint.com";
  const char ch = '\0';
  char *ret;

  ret = strchr(str, ch);

  printf("String after |%c| is - |%s|\n", ch, ret);

  return 0;
}
