#include "unity.h"
#include "multiplier.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_zero_multiplication(void) {
    TEST_ASSERT_EQUAL_INT(0, multiplier(0, 10));
    TEST_ASSERT_EQUAL_INT(0, multiplier(10, 0));
}