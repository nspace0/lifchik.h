#include "s21_string.h"

// void *s21_memchr(const void *string, int c, s21_size_t n) {}

// int s21_memcmp(const void *string1, const void *string2, s21_size_t n) {}

// void *s21_memcpy(void *destination, const void *source, s21_size_t n) {}

void *s21_memset(void *string, int c, s21_size_t n) {
  unsigned char *p = (unsigned char *)string;
  while (n > 0) {
    *p = (unsigned char)c;
    n--;
    p++;
  }
  return string;
}

char *s21_strncat(char *destination, const char *source, s21_size_t n) {}

char *s21_strchr(const char *string, int c) {}

// int s21_strncmp(const char *string1, const char *string2, s21_size_t n) {}

char *s21_strncpy(char *destination, const char *source, s21_size_t n) {}

s21_size_t s21_strcspn(const char *str1, const char *str2) {}

char *s21_strerror(int errnum) {}

s21_size_t s21_strlen(const char *string) {
  const char *end = string;

  while (*end != '\0') {
    ++end;
  }

  return end - string;
}

char *s21_strpbrk(const char *string1, const char *string2) {}

char *s21_strchr(const char *string, int c) {}

char *s21_strstr(const char *haystack, const char *needle) {}

char *s21_strtok(char *str, const char *delim) {}

// bonus quest5
void *s21_to_upper(const char *string) {}

void *s21_to_lower(const char *string) {}

void *s21_insert(const char *source, const char *string,
                 s21_size_t start_index) {}

void *s21_trim(const char *source, const char *trim_chars) {}