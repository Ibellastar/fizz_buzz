#include "unity.h"
#include "multiplier.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_zero_times_zero(void) {
    TEST_ASSERT_EQUAL_INT(0, multiplier(0, 0));
}