#include <assert.h>
#include <errno.h>
#include <stdio.h>

#include "s21_string.h"
int test_s21_strcpn();

int main() {
  test_s21_strcpn();
  printf("All tests passed!\n");
  return 0;
}

int test_s21_strcpn() {
  // Тест 1: Проверка корректной работы функции
  assert(s21_strcpn("Hello, world!", "l") == 2);
  assert(s21_strcpn("This is a test", " ") == 4);
  assert(s21_strcpn("Foo bar baz", "xyz") == 11);

  // Тест 2: Проверка пустой строки str1
  assert(s21_strcpn("", "abc") == 0);

  // Тест 3: Проверка пустой строки str2
  assert(s21_strcpn("Hello", "") == 5);

  // Тест 4: Проверка NULL в качестве аргумента
  errno = 0;
  assert(s21_strcpn(NULL, "abc") == 0);
  assert(errno == EINVAL);
  errno = 0;
  assert(s21_strcpn("xyz", NULL) == 0);
  assert(errno == EINVAL);
}
