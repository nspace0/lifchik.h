#include <check.h>
#include "../s21_string.h"

START_TEST(test_s21_trim_1) {
  char *result = s21_trim("", "");
  ck_assert_str_eq(result, "");
  free(result);
}
END_TEST

START_TEST(test_s21_trim_2) {
  char *result = s21_trim("", "abcdefg");
  ck_assert_str_eq(result, "");
  free(result);
}
END_TEST

START_TEST(test_s21_trim_3) {
  char *result = s21_trim("one more message", "");
  ck_assert_str_eq(result, "one more message");
  free(result);
}
END_TEST

START_TEST(test_s21_trim_4) {
  char *result = s21_trim("one more message", "one more message");
  ck_assert_str_eq(result, "");
  free(result);
}
END_TEST

START_TEST(test_s21_trim_5) {
  char *result = s21_trim("+!!++Abo+ba++00", "+!0-");
  ck_assert_str_eq(result, "Abo+ba");
  free(result);
}
END_TEST

START_TEST(test_s21_trim_6) {
  char *result = s21_trim("+!!++Abo+ba++00", "+!0-");
  ck_assert_str_eq(result, "Abo+ba");
  free(result);
}
END_TEST

START_TEST(test_s21_trim_7) {
  char *result = s21_trim("Ab000cd0", "003");
  ck_assert_str_eq(result, "Ab000cd");
  free(result);
}
END_TEST

START_TEST(test_s21_trim_8) {
  char *result = s21_trim("DoNotTouch", "Not");
  ck_assert_str_eq(result, "DoNotTouch");
  free(result);
}
END_TEST

START_TEST(test_s21_trim_9) {
  char *result = s21_trim(" Good morning!    ", " ");
  ck_assert_str_eq(result, "Good morning!");
  free(result);
}
END_TEST

Suite *s21_trim_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_trim");

  tc_core = tcase_create("trim_tc");

  tcase_add_test(tc_core, test_s21_trim_1);
  tcase_add_test(tc_core, test_s21_trim_2);
  tcase_add_test(tc_core, test_s21_trim_3);
  tcase_add_test(tc_core, test_s21_trim_4);
  tcase_add_test(tc_core, test_s21_trim_5);
  tcase_add_test(tc_core, test_s21_trim_6);
  tcase_add_test(tc_core, test_s21_trim_7);
  tcase_add_test(tc_core, test_s21_trim_8);
  tcase_add_test(tc_core, test_s21_trim_9);
  suite_add_tcase(s, tc_core);

  return s;
}