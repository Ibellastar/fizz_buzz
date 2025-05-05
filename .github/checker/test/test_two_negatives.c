#include "unity.h"
#include "multiplier.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_two_negatives(void) {
    TEST_ASSERT_EQUAL_INT(21, multiplier(-3, -7));
}