#include <check.h>

#include "../s21_string.h"

START_TEST(test_s21_to_upper_1) {
  char *str1 = "Default sentence with numbers: 123";
  char *result = s21_to_upper(str1);
  ck_assert_str_eq(result, "DEFAULT SENTENCE WITH NUMBERS: 123");
  free(result);
}
END_TEST


START_TEST(test_s21_to_upper_2) {
  char *str1 = "";
  char *result = s21_to_upper(str1);
  ck_assert_str_eq(result, ""); //тест: пустая строка.
  free(result);
}
END_TEST


START_TEST(test_s21_to_upper_3) {
  char *str1 = "LARGE LETTERS";
  char *result = s21_to_upper(str1);
  ck_assert_str_eq(result, "LARGE LETTERS"); //тест: ту аппер текст
  free(result);
}
END_TEST


START_TEST(test_s21_to_upper_4) {
  char *str1 = "Another\n one SenTenCE\t wWith\0 words";
  char *result = s21_to_upper(str1);
  ck_assert_str_eq(result, "ANOTHER\n ONE SENTENCE\t WWITH");
  free(result);
}
END_TEST

Suite *s21_to_upper_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_to_upper");

  tc_core = tcase_create("to_upper_tc");

  tcase_add_test(tc_core, test_s21_to_upper_1);
  tcase_add_test(tc_core, test_s21_to_upper_2);
  tcase_add_test(tc_core, test_s21_to_upper_3);
  tcase_add_test(tc_core, test_s21_to_upper_4);
  suite_add_tcase(s, tc_core);

  return s;
}