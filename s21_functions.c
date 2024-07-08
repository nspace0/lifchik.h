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
  return s21_NULL;
}

// int s21_strncmp(const char *string1, const char *string2, s21_size_t n) {}

char *s21_strncpy(char *destination, const char *source, s21_size_t n) {
  if (destination == s21_NULL || source == s21_NULL) return s21_NULL;
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

char *s21_strrchr(const char *string, int c) {}

char *s21_strstr(const char *haystack, const char *needle) {}

char *s21_strtok(char *str, const char *delim) {}

// bonus quest5
void *s21_to_upper(const char *string) {
  if (string == s21_NULL) return s21_NULL;

  s21_size_t len = s21_strlen(string);

  char *ptr = (char *)malloc(sizeof(char) * (len + 1));

  if (ptr == s21_NULL) return s21_NULL;

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

void *s21_to_lower(const char *string) {}

void *s21_insert(const char *source, const char *string,
                 s21_size_t start_index) {}

void *s21_trim(const char *source, const char *trim_chars) {}