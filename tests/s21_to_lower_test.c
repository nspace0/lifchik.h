#include <check.h>
#include "../s21_string.h"

START_TEST(test_s21_to_lower_1) {
    char *str1 = "Default sentence with numbers: 123";
    char *result = s21_to_lower(str1);
    ck_assert_str_eq(result, "default sentence with numbers: 123");
    free(result);
  }
  END_TEST

  // Test empty sentence
START_TEST(test_s21_to_lower_2) {
    char *str1 = "";
    char *result = s21_to_lower(str1);
    ck_assert_str_eq(result, "");
    free(result);
  }
  END_TEST

  // Test sentence with only large letters
START_TEST(test_s21_to_lower_3){
    char *str1 = "LARGE LETTERS";
    char *result = s21_to_lower(str1);
    ck_assert_str_eq(result, "large letters");
    free(result);
  }
  END_TEST

  // Test sentence with formats
START_TEST(test_s21_to_lower_4) {
    char *str1 = "Another\n one SenTenCE\t wWith\0 words";
    char *result = s21_to_lower(str1);
    ck_assert_str_eq(result, "another\n one sentence\t wwith\0 words");
    free(result);
}
END_TEST

Suite *s21_to_lower_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_to_lower");

  tc_core = tcase_create("to_lower_tc");

  tcase_add_test(tc_core, test_s21_to_lower_1);
  tcase_add_test(tc_core, test_s21_to_lower_2);
  tcase_add_test(tc_core, test_s21_to_lower_3);
  tcase_add_test(tc_core, test_s21_to_lower_4);
  suite_add_tcase(s, tc_core);

  return s;
}