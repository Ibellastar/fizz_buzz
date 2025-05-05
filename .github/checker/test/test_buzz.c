#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_positive_numbers(void) {
    TEST_ASSERT_EQUAL_INT((fizzbuzz(5), "Buzz") == 0);
}