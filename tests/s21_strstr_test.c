#include <check.h>

#include "../s21_string.h"

START_TEST(test_s21_strstr_1) {
  char str[100] = "Hello hello Hello";
  char str1[100] = "hello";
  ck_assert_pstr_eq(strstr(str, str1), strstr(str, str1));
}
END_TEST

START_TEST(test_s21_strstr_2) {
  char str[100] = "Hello hello Hello";
  char str1[100] = "Hello";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(test_s21_strstr_3) {
  char str[100] = "helloHellohelloHello";
  char str1[100] = "Hello";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(test_s21_strstr_4) {
  char str[100] = "Hello, world!";
  char str1[100] = "\0";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(test_s21_strstr_5) {
  char str[100] = "Hello, world!";
  char str1[100] = "l";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(test_s21_strstr_6) {
  char str[100] = "Hello, world!";
  char str1[100] = "A";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(test_s21_strstr_7) {
  char str[100] = "12341234124";
  char str1[100] = "12";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(test_s21_strstr_8) {
  char str[100] = "69917020";
  char str1[100] = "6998";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(test_s21_strstr_9) {
  char str[100] = "69917020";
  char str1[100] = "270";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(test_s21_strstr_10) {
  char str[100] = "Hello";
  char str1[100] = "Hello";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(test_s21_strstr_11) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, world!\0";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

Suite *s21_strstr_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_strstr");

  tc_core = tcase_create("strstr_tc");

  tcase_add_test(tc_core, test_s21_strstr_1);
  tcase_add_test(tc_core, test_s21_strstr_2);
  tcase_add_test(tc_core, test_s21_strstr_3);
  tcase_add_test(tc_core, test_s21_strstr_4);
  tcase_add_test(tc_core, test_s21_strstr_5);
  tcase_add_test(tc_core, test_s21_strstr_6);
  tcase_add_test(tc_core, test_s21_strstr_7);
  tcase_add_test(tc_core, test_s21_strstr_8);
  tcase_add_test(tc_core, test_s21_strstr_9);
  tcase_add_test(tc_core, test_s21_strstr_10);
  tcase_add_test(tc_core, test_s21_strstr_11);
  suite_add_tcase(s, tc_core);

  return s;
}