#include <check.h>

#include "../s21_string.h"

START_TEST(test_s21_strrchr_1) {
  char str[100] = "Hello";
  char c = 'e';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(test_s21_strrchr_2) {
  char str[100] = "Hello, world!";
  char c = 'o';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(test_s21_strrchr_3) {
  char str[100] = "Hello, world!";
  char c = 'h';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(test_s21_strrchr_4) {
  char str[100] = "Hello, world!";
  char c = 'H';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(test_s21_strrchr_5) {
  char str[100] = "Hello, world!";
  char c = 69;
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(test_s21_strrchr_6) {
  char str[100] = "Hello, world!";
  char c = 68;
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(test_s21_strrchr_7) {
  char str[100] = "Hello, world!";
  char c = 0;
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(test_s21_strrchr_8) {
  char str[100] = "69917020";
  char c = '\0';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(test_s21_strrchr_9) {
  char str[100] = "69917020";
  char c = '0';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

Suite *s21_strrchr_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_strrchr");

  tc_core = tcase_create("strrchr_tc");

  tcase_add_test(tc_core, test_s21_strrchr_1);
  tcase_add_test(tc_core, test_s21_strrchr_2);
  tcase_add_test(tc_core, test_s21_strrchr_3);
  tcase_add_test(tc_core, test_s21_strrchr_4);
  tcase_add_test(tc_core, test_s21_strrchr_5);
  tcase_add_test(tc_core, test_s21_strrchr_6);
  tcase_add_test(tc_core, test_s21_strrchr_7);
  tcase_add_test(tc_core, test_s21_strrchr_8);
  tcase_add_test(tc_core, test_s21_strrchr_9);
  suite_add_tcase(s, tc_core);

  return s;
}
