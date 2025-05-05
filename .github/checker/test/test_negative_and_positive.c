#include "unity.h"
#include "multiplier.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_negative_and_positive(void) {
    TEST_ASSERT_EQUAL_INT(-20, multiplier(4, -5));
}