#include "unity.h"
#include "header.h"
#include "test.h"

int test_main(void);

/* Modify these two lines according to the project */

#define PROJECT_NAME    "arya_calc"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_factorial(void);
void test_modulus(void);
void test_exp(void);
void test_square(void);
void test_percentage(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_factorial);
  RUN_TEST(test_modulus);
  RUN_TEST(test_exp);
  RUN_TEST(test_square);
  RUN_TEST(test_percentage);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(400, add(200, 200));
  TEST_ASSERT_EQUAL(42, add(32, 10));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  TEST_ASSERT_EQUAL(-10, subtract(10, 20));
  TEST_ASSERT_EQUAL(30, subtract(50, 20));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  TEST_ASSERT_EQUAL(100, multiply(10, 10));
  TEST_ASSERT_EQUAL(35, multiply(-7, -5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(90, division(900, 10));
  TEST_ASSERT_EQUAL(0, division(3, 0));
  TEST_ASSERT_EQUAL(9, division(80, 10));
}

void test_factorial(void)
{
  TEST_ASSERT_EQUAL(6, factorial(3));
  TEST_ASSERT_EQUAL(1, factorial(0));
  TEST_ASSERT_EQUAL(1, factorial(1));
  TEST_ASSERT_EQUAL(22, factorial(4));
}
void test_modulus(void)
{
    TEST_ASSERT_EQUAL(6, modulus(60, 10));
    TEST_ASSERT_EQUAL(5, modulus(35, 6));
    TEST_ASSERT_EQUAL(2, modulus(43, 7));
}

void test_exp(void)
{
  TEST_ASSERT_EQUAL(9, exponential(3, 2));
  TEST_ASSERT_EQUAL(1, exponential(10, 0));
}

void test_square(void){
  TEST_ASSERT_EQUAL(100, square(10));
}

void test_percentage(void){
  TEST_ASSERT_EQUAL(50, percentage(10, 20));
}
