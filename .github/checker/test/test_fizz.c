#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_fizz(void) {
    TEST_ASSERT_EQUAL_INT((fizzbuzz(3), "Fizz") == 0);
}