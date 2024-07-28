#include <check.h>

#include "../s21_string.h"

START_TEST(test_s21_strpbrk_1) {
  char str[100] = "Hello, world!";
  char str1[100] = "world";
  ck_assert_pstr_eq(strpbrk(str, str1), strpbrk(str, str1));
}
END_TEST

START_TEST(test_s21_strpbrk_2) {
  char str[100] = "Hello, world!";
  char str1[100] = "not helloworld((";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(test_s21_strpbrk_3) {
  char str[100] = "Hello, world!";
  char str1[100] = "hello, world!";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(test_s21_strpbrk_4) {
  char str[100] = "Hello, world!";
  char str1[100] = "abc";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(test_s21_strpbrk_5) {
  char str[100] = "Hello, world!";
  char str1[100] = "";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(test_s21_strpbrk_6) {
  char str[100] = "Hello, world!";
  char str1[100] = "\0";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(test_s21_strpbrk_7) {
  char str[100] = "1234347";
  char str1[100] = "89";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(test_s21_strpbrk_8) {
  char str[100] = "1234347";
  char str1[100] = "123";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(test_s21_strpbrk_9) {
  char str[100] = "1234347";
  char str1[100] = "321";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(test_s21_strpbrk_10) {
  char str[100] = "";
  char str1[100] = "";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(test_s21_strpbrk_11) {
  char str[100] = "";
  char str1[100] = "Hello, world!";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

Suite *s21_strpbrk_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_strpbrk");

  tc_core = tcase_create("strpbrk_tc");

  tcase_add_test(tc_core, test_s21_strpbrk_1);
  tcase_add_test(tc_core, test_s21_strpbrk_2);
  tcase_add_test(tc_core, test_s21_strpbrk_3);
  tcase_add_test(tc_core, test_s21_strpbrk_4);
  tcase_add_test(tc_core, test_s21_strpbrk_5);
  tcase_add_test(tc_core, test_s21_strpbrk_6);
  tcase_add_test(tc_core, test_s21_strpbrk_7);
  tcase_add_test(tc_core, test_s21_strpbrk_8);
  tcase_add_test(tc_core, test_s21_strpbrk_9);
  tcase_add_test(tc_core, test_s21_strpbrk_10);
  tcase_add_test(tc_core, test_s21_strpbrk_11);
  suite_add_tcase(s, tc_core);

  return s;
}