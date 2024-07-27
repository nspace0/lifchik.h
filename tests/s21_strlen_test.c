#include <check.h>
#include "s21_string.h"

START_TEST(test_s21_strlen) {
	ck_assert_int_eq(s21_strlen(""),0);
	ck_assert_int_eq(s21_strlen("Hello"),5);
	ck_assert_int_eq(s21_strlen("Hello, world!"),13);
}
END_TEST

Suite *s21_strlen_suite(void) {
	Suite *s;
	TCase *tc_core;

	s = suite_create("S21Strlen");

	tc_core = tcase_create("Core");
	tcase_add_test(tc_core, test_s21_strlen);
	suite_add_tcase(s, tc_core);

	return s;
}
