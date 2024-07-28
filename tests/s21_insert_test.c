#include <check.h>
#include "../s21_string.h"

START_TEST(test_s21_insert_1) {
  char *result = s21_insert("Hello", " world", 5);
  ck_assert_str_eq(result, "Hello world");
  free(result);
}
END_TEST

// Default test case 2
START_TEST(test_s21_insert_2) {
  char *result = s21_insert(" ", "Hello world", 0);
  ck_assert_str_eq(result, "Hello world ");
  free(result);
}
END_TEST

// Test case with 0 index
START_TEST(test_s21_insert_3) {
  char *result = s21_insert("Hello", " world", 0);
  ck_assert_str_eq(result, " worldHello");
  free(result);
}
END_TEST

// Test case with negative index
START_TEST(test_s21_insert_4) {
  char *result = s21_insert("Hello", " world", -1);
  ck_assert_ptr_eq(result, s21_NULL);
  free(result);
}
END_TEST

// Test case with index bigger that word len
START_TEST(test_s21_insert_5) {
  char *result = s21_insert("Hello", " world", 15);
  ck_assert_ptr_eq(result, s21_NULL);
  free(result);
}
END_TEST

// Test case with adding empty string
START_TEST(test_s21_insert_6) {
  char *result = s21_insert("Hello world", "", 5);
  ck_assert_str_eq(result, "Hello world");
  free(result);
}
END_TEST

Suite *s21_insert_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("TEST: s21_insert");

  tc_core = tcase_create("insert_tc");

  tcase_add_test(tc_core, test_s21_insert_1);
  tcase_add_test(tc_core, test_s21_insert_2);
  tcase_add_test(tc_core, test_s21_insert_3);
  tcase_add_test(tc_core, test_s21_insert_4);
  tcase_add_test(tc_core, test_s21_insert_5);
  tcase_add_test(tc_core, test_s21_insert_6);
  suite_add_tcase(s, tc_core);

  return s;
}