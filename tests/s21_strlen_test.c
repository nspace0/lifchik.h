#include <check.h>

#include "../s21_string.h"

START_TEST(test_s21_strlen_1) {
  char str[10] = "123456789";
  s21_size_t res = s21_strlen(str);
  s21_size_t expected = strlen(str);
  ck_assert_int_eq(res, expected);
}
END_TEST

START_TEST(test_s21_strlen_2) {
  char str[10] = "";
  s21_size_t res = s21_strlen(str);
  s21_size_t expected = strlen(str);
  ck_assert_int_eq(res, expected);
}
END_TEST

START_TEST(test_s21_strlen_3) {
  char str[1024] =
      "This is a long string with more than 100 characters. It should be long "
      "enough to test the s21_strlen function properly.";
  s21_size_t res = s21_strlen(str);
  s21_size_t expected = strlen(str);
  ck_assert_int_eq(res, expected);
}
END_TEST

START_TEST(test_s21_strlen_4) {
  char str[] = "Hello\0world";
  s21_size_t res = s21_strlen(str);
  s21_size_t expected = strlen(str);
  ck_assert_int_eq(res, expected);
}
END_TEST

START_TEST(test_s21_strlen_5) {
  const char str[] = "This is a test string";
  ck_assert_int_eq(s21_strlen(str), strlen(str));
}
END_TEST

START_TEST(test_s21_strlen_6) {
  const char str[] = "";
  ck_assert_int_eq(s21_strlen(str), strlen(str));
}
END_TEST

START_TEST(test_s21_strlen_7) {
  const char str[] = "\0\0\0";
  ck_assert_int_eq(s21_strlen(str), strlen(str));
}
END_TEST

START_TEST(test_s21_strlen_8) {
  const char str[] = "1234567890";
  ck_assert_int_eq(s21_strlen(str), strlen(str));
}
END_TEST

START_TEST(test_s21_strlen_9) {
  const char str[] = "??$#@!@*";
  ck_assert_int_eq(s21_strlen(str), strlen(str));
}
END_TEST

START_TEST(test_s21_strlen_10) {
  const char str[] = "This is test\0 string";
  ck_assert_int_eq(s21_strlen(str), strlen(str));
}
END_TEST

Suite *s21_strlen_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_strlen");

  tc_core = tcase_create("strlen_tc");

  tcase_add_test(tc_core, test_s21_strlen_1);
  tcase_add_test(tc_core, test_s21_strlen_2);
  tcase_add_test(tc_core, test_s21_strlen_3);
  tcase_add_test(tc_core, test_s21_strlen_4);
  tcase_add_test(tc_core, test_s21_strlen_5);
  tcase_add_test(tc_core, test_s21_strlen_6);
  tcase_add_test(tc_core, test_s21_strlen_7);
  tcase_add_test(tc_core, test_s21_strlen_8);
  tcase_add_test(tc_core, test_s21_strlen_9);
  tcase_add_test(tc_core, test_s21_strlen_10);
  suite_add_tcase(s, tc_core);

  return s;
}
