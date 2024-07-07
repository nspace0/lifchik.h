#include <check.h>

#include "s21_string.h"

START_TEST(s21_memset_test) {
  ck_assert_str_eq(s21_memset(string1, 'H', 10), memset(string1, 'H', 10));
  ck_assert_str_eq(s21_memset(string2, '7', 10), memset(string2, '7', 10));
  ck_assert_str_eq(s21_memset(cmp_str2, '0', 10), memset(cmp_str2, '0', 10));
}
END_TEST