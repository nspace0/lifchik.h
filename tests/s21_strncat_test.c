#include <check.h>

#include "../s21_string.h"

START_TEST(test_s21_strncat_1) {
  char str[100] = "Hello";
  char str1[100] = "world";
  ck_assert_str_eq(strncat(str, str1, 3), strncat(str, str1, 3));
}
END_TEST

START_TEST(test_s21_strncat_2) {
  char str[100] = "Hello, world!";
  char str1[100] = "not helloworld((";
  ck_assert_str_eq(strncat(str, str1, strlen(str1)),
                   s21_strncat(str, str1, strlen(str1)));
}
END_TEST

START_TEST(test_s21_strncat_3) {
  char str[100] = "Hello, world!";
  char str1[100] = "hello, world!";
  ck_assert_str_eq(strncat(str, str1, 13), s21_strncat(str, str1, 13));
}
END_TEST

START_TEST(test_s21_strncat_4) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, world\0";
  ck_assert_str_eq(strncat(str, str1, 0), s21_strncat(str, str1, 0));
}
END_TEST

START_TEST(test_s21_strncat_5) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello,\n world";
  ck_assert_str_eq(strncat(str, str1, 10), s21_strncat(str, str1, 10));
}
END_TEST

START_TEST(test_s21_strncat_6) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, Harry!";
  ck_assert_str_eq(strncat(str, str1, 1), s21_strncat(str, str1, 1));
}
END_TEST

START_TEST(test_s21_strncat_7) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, Harry";
  ck_assert_str_eq(strncat(str, str1, 5), s21_strncat(str, str1, 5));
}
END_TEST

START_TEST(test_s21_strncat_8) {
  char str[100] = "69917020";
  char str1[100] = "69917020";
  ck_assert_str_eq(strncat(str, str1, 8), s21_strncat(str, str1, 8));
}
END_TEST

START_TEST(test_s21_strncat_9) {
  char str[100] = "69917020";
  char str1[100] = "69917020";
  ck_assert_str_eq(strncat(str, str1, 4), s21_strncat(str, str1, 4));
}
END_TEST

START_TEST(test_s21_strncat_10) {
  char str[100] = "Hello";
  char str1[100] = "Hello";
  ck_assert_str_eq(strncat(str, str1, 6), s21_strncat(str, str1, 6));
}
END_TEST

START_TEST(test_s21_strncat_11) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, world!\0";
  ck_assert_str_eq(strncat(str, str1, 90), s21_strncat(str, str1, 90));
}
END_TEST

Suite *s21_strncat_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_strncat");

  tc_core = tcase_create("strncat_tc");

  tcase_add_test(tc_core, test_s21_strncat_1);
  tcase_add_test(tc_core, test_s21_strncat_2);
  tcase_add_test(tc_core, test_s21_strncat_3);
  tcase_add_test(tc_core, test_s21_strncat_4);
  tcase_add_test(tc_core, test_s21_strncat_5);
  tcase_add_test(tc_core, test_s21_strncat_6);
  tcase_add_test(tc_core, test_s21_strncat_7);
  tcase_add_test(tc_core, test_s21_strncat_8);
  tcase_add_test(tc_core, test_s21_strncat_9);
  tcase_add_test(tc_core, test_s21_strncat_10);
  tcase_add_test(tc_core, test_s21_strncat_11);

  suite_add_tcase(s, tc_core);

  return s;
}