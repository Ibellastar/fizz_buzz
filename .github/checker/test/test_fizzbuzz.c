#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_two_negatives(void) {
    TEST_ASSERT_EQUAL_INT((fizzbuzz(15), "FizzBuzz") == 0);
}