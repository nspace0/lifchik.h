#include <check.h>

#include "../s21_string.h"

START_TEST(test_s21_strchr_1) {
  char str[100] = "Hello";
  char c = 'e';
  ck_assert_pstr_eq(strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(test_s21_strchr_2) {
  char str[100] = "Hello, world!";
  char c = 'o';
  ck_assert_pstr_eq(strchr(str, c), s21_strchr(str, c));
}
END_TEST

START_TEST(test_s21_strchr_3) {
  char str[100] = "Hello, world!";
  char c = 'h';
  ck_assert_pstr_eq(strchr(str, c), s21_strchr(str, c));
}
END_TEST

START_TEST(test_s21_strchr_4) {
  char str[100] = "Hello, world!";
  char c = 'H';
  ck_assert_pstr_eq(strchr(str, c), s21_strchr(str, c));
}
END_TEST

START_TEST(test_s21_strchr_5) {
  char str[100] = "Hello, world!";
  char c = 69;
  ck_assert_pstr_eq(strchr(str, c), s21_strchr(str, c));
}
END_TEST

START_TEST(test_s21_strchr_6) {
  char str[100] = "Hello, world!";
  char c = 68;
  ck_assert_pstr_eq(strchr(str, c), s21_strchr(str, c));
}
END_TEST

START_TEST(test_s21_strchr_7) {
  char str[100] = "Hello, world!";
  char c = 0;
  ck_assert_pstr_eq(strchr(str, c), s21_strchr(str, c));
}
END_TEST

START_TEST(test_s21_strchr_8) {
  char str[100] = "69917020";
  char c = '\0';
  ck_assert_pstr_eq(strchr(str, c), s21_strchr(str, c));
}
END_TEST

START_TEST(test_s21_strchr_9) {
  char str[100] = "69917020";
  char c = '0';
  ck_assert_pstr_eq(strchr(str, c), s21_strchr(str, c));
}
END_TEST

Suite *s21_strchr_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_strchr");

  tc_core = tcase_create("strchr_tc");

  tcase_add_test(tc_core, test_s21_strchr_1);
  tcase_add_test(tc_core, test_s21_strchr_2);
  tcase_add_test(tc_core, test_s21_strchr_3);
  tcase_add_test(tc_core, test_s21_strchr_4);
  tcase_add_test(tc_core, test_s21_strchr_5);
  tcase_add_test(tc_core, test_s21_strchr_6);
  tcase_add_test(tc_core, test_s21_strchr_7);
  tcase_add_test(tc_core, test_s21_strchr_8);
  tcase_add_test(tc_core, test_s21_strchr_9);
  suite_add_tcase(s, tc_core);

  return s;
}