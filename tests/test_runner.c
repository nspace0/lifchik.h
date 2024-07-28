#include <check.h>

#include "s21_memchr_test.c"
#include "s21_memcmp_test.c"
#include "s21_memcpy_test.c"
#include "s21_memset_test.c"
#include "s21_strchr_test.c"
#include "s21_strcspn_test.c"
#include "s21_strerror_test.c"
#include "s21_strlen_test.c"
#include "s21_strncat_test.c"
#include "s21_strncmp_test.c"
#include "s21_strncpy_test.c"
#include "s21_strpbrk_test.c"
#include "s21_strrchr_test.c"
#include "s21_strstr_test.c"
#include "s21_strtok_test.c"
#include "s21_to_upper_test.c"
#include "s21_to_lower_test.c"
#include "s21_insert_test.c"
#include "s21_trim_test.c"

int main(void) {
  int number_failed;
  Suite *s1, *s2, *s3, *s4, *s5, *s6, *s7, *s8, *s9, *s10, *s11, *s12, *s13,
      *s14, *s15, *s16, *s17, *s18, *s19;

  SRunner *sr;

  s1 = s21_memchr_suite();
  s2 = s21_memcmp_suite();
  s3 = s21_memcpy_suite();
  s4 = s21_memset_suite();
  s5 = s21_strncat_suite();
  s6 = s21_strchr_suite();
  s7 = s21_strncmp_suite();
  s8 = s21_strncpy_suite();
  s9 = s21_strcspn_suite();
  s10 = s21_strerror_suite();
  s11 = s21_strlen_suite();
  s12 = s21_strpbrk_suite();
  s13 = s21_strrchr_suite();
  s14 = s21_strstr_suite();
  s15 = s21_strtok_suite();
  s16 = s21_to_upper_suite();
  s17 = s21_to_lower_suite();
  s18 = s21_insert_suite();
  s19 = s21_trim_suite();

  sr = srunner_create(s1);
  srunner_add_suite(sr, s2);
  srunner_add_suite(sr, s3);
  srunner_add_suite(sr, s4);
  srunner_add_suite(sr, s5);
  srunner_add_suite(sr, s6);
  srunner_add_suite(sr, s7);
  srunner_add_suite(sr, s8);
  srunner_add_suite(sr, s9);
  srunner_add_suite(sr, s10);
  srunner_add_suite(sr, s11);
  srunner_add_suite(sr, s12);
  srunner_add_suite(sr, s13);
  srunner_add_suite(sr, s14);
  srunner_add_suite(sr, s15);
  srunner_add_suite(sr, s16);
  srunner_add_suite(sr, s17);
  srunner_add_suite(sr, s18);
  srunner_add_suite(sr, s19);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? 0 : 1;
}
