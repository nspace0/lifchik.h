#include <check.h>

#include "../s21_string.h"

START_TEST(test_s21_strerror_1) {
  int errnum = 1;
  ck_assert_str_eq(strerror(errnum), strerror(errnum));
}
END_TEST

START_TEST(test_s21_strerror_2) {
  int errnum = -1;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

START_TEST(test_s21_strerror_3) {
  int errnum = 150;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

START_TEST(test_s21_strerror_4) {
  int errnum = 1500;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

START_TEST(test_s21_strerror_5) {
  int errnum = 0;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

START_TEST(test_s21_strerror_6) {
  int errnum = 2;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

START_TEST(test_s21_strerror_7) {
  int errnum = 50;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

START_TEST(test_s21_strerror_8) {
  int errnum = 25;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

Suite *s21_strerror_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_strerror");

  tc_core = tcase_create("strerror_tc");

  tcase_add_test(tc_core, test_s21_strerror_1);
  tcase_add_test(tc_core, test_s21_strerror_2);
  tcase_add_test(tc_core, test_s21_strerror_3);
  tcase_add_test(tc_core, test_s21_strerror_4);
  tcase_add_test(tc_core, test_s21_strerror_5);
  tcase_add_test(tc_core, test_s21_strerror_6);
  tcase_add_test(tc_core, test_s21_strerror_7);
  tcase_add_test(tc_core, test_s21_strerror_8);
  suite_add_tcase(s, tc_core);

  return s;
}