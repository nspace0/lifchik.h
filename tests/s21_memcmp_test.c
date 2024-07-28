#include <check.h>

#include "../s21_string.h"

START_TEST(test_s21_memcmp_1) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, world!";
  s21_size_t len = strlen(str);
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

START_TEST(test_s21_memcmp_2) {
  char str[] = "Hello, world!";
  char str1[] = "not helloworld((";
  s21_size_t len = strlen(str);
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

START_TEST(test_s21_memcmp_3) {
  char str[] = "Hello, world!";
  char str1[] = "hello, world!";
  s21_size_t len = strlen(str);
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

START_TEST(test_s21_memcmp_4) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, world\0";
  s21_size_t len = strlen(str);
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

START_TEST(test_s21_memcmp_5) {
  char str[] = "Hello, world!";
  char str1[] = "Hello,\n world";
  s21_size_t len = 10;
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

START_TEST(test_s21_memcmp_6) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, Harry!";
  s21_size_t len = 5;
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

START_TEST(test_s21_memcmp_7) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, Harry";
  s21_size_t len = 8;
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

START_TEST(test_s21_memcmp_8) {
  char str[] = "69917020";
  char str1[] = "69917020";
  s21_size_t len = 0;
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

START_TEST(test_s21_memcmp_9) {
  char str[] = "69917020";
  char str1[] = "69917020";
  s21_size_t len = strlen(str);
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

START_TEST(test_s21_memcmp_10) {
  char str[] = "Hello";
  char str1[] = "Hello";
  s21_size_t len = 0;
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

START_TEST(test_s21_memcmp_11) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, world!\0";
  s21_size_t len = strlen(str) + 1;
  ck_assert_int_eq(memcmp(str, str1, len), s21_memcmp(str, str1, len));
}
END_TEST

Suite *s21_memcmp_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_memcmp");

  tc_core = tcase_create("memcmp_tc");

  tcase_add_test(tc_core, test_s21_memcmp_1);
  tcase_add_test(tc_core, test_s21_memcmp_2);
  tcase_add_test(tc_core, test_s21_memcmp_3);
  tcase_add_test(tc_core, test_s21_memcmp_4);
  tcase_add_test(tc_core, test_s21_memcmp_5);
  tcase_add_test(tc_core, test_s21_memcmp_6);
  tcase_add_test(tc_core, test_s21_memcmp_7);
  tcase_add_test(tc_core, test_s21_memcmp_8);
  tcase_add_test(tc_core, test_s21_memcmp_9);
  tcase_add_test(tc_core, test_s21_memcmp_10);
  tcase_add_test(tc_core, test_s21_memcmp_11);

  suite_add_tcase(s, tc_core);

  return s;
}