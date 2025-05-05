#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_zero_multiplication(void) {
    TEST_ASSERT_EQUAL_INT((fizzbuzz(2), "2") == 0);
}