#include "s21_string.h"

void *memchr(const void *string, int c, s21_size_t n) {}

int memcmp(const void *string1, const void *string2, s21_size_t n) {}

void *memcpy(void *destination, const void *source, s21_size_t n) {}

void *memset(void *string, int c, s21_size_t n) {}

char *strncat(char *destination, const char *source, s21_size_t n) {}

char *strchr(const char *string, int c) {}

int strncmp(const char *string1, const char *string2, s21_size_t n) {}

char *strncpy(char *destination, const char *source, s21_size_t n) {}

s21_size_t strcspn(const char *str1, const char *str2) {}

char *strerror(int errnum) {}

s21_size_t strlen(const char *string) {
  const char *end = string;

  while (*end != '\0') {
    ++end;
  }

  return end - str;
}

char *strpbrk(const char *string1, const char *string2) {}

char *strchr(const char *string, int c) {}

char *strstr(const char *haystack, const char *needle) {}

char *strtok(char *str, const char *delim) {}

// bonus quest5
void *s21_to_upper(const char *string) {}

void *s21_to_lower(const char *string) {}

void *s21_insert(const char *source, const char *string,
                 s21_size_t start_index) {}

void *s21_trim(const char *source, const char *trim_chars) {}