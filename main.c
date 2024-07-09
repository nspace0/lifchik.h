#include <stdio.h>
#include <stdlib.h>
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
char *s21_strchr(const char *string, int c) {
  c = (unsigned char)c;

  while (*string) {
    if (*string == c) {
      return (char *)string;
    }
    string++;
  }

  if (c == '\0') {
    return (char *)string;
  }
  return NULL;
}
char *s21_strncpy(char *destination, const char *source, s21_size_t n) {
  if (destination == NULL || source == NULL) return NULL;
  char *ptr = destination;
  while (n > 0 && *source != '\0') {
    *destination++ = *source++;
    n--;
  }

  while (n > 0) {
    *destination++ = '\0';
    n--;
  }
  return ptr;
}
void *s21_to_upper(const char *string) {
  if (string == NULL) return NULL;

  s21_size_t len = s21_strlen(string);

  char *ptr = (char *)malloc(sizeof(char) * (len + 1));

  if (ptr == NULL) return NULL;

  for (s21_size_t i = 0; i < len; i++) {
    if (string[i] >= 97 && string[i] <= 122) {
      ptr[i] = string[i] - 32;
    } else {
      ptr[i] = string[i];
    }
  }
  ptr[len] = '\0';

  return ptr;
}
void *s21_to_lower(const char *string) {
  if (string == NULL) return NULL;

  s21_size_t len = s21_strlen(string);

  char *ptr = (char *)malloc(sizeof(char) * (len + 1));

  if (ptr == NULL) return NULL;

  for (s21_size_t i = 0; i < len; i++) {
    if (string[i] >= 65 && string[i] <= 90) {
      ptr[i] = string[i] + 32;
    } else {
      ptr[i] = string[i];
    }
  }
  ptr[len] = '\0';

  return ptr;
}

int main() {
  char *str = "be or not to be";
  char *upper_str = s21_to_upper(str);
  if (upper_str != NULL) {
    printf("%s\n", upper_str);
    free(upper_str);
  } else {
    printf("memory allocation failed.\n");
  }

  return 0;
}
