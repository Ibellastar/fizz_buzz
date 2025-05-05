#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_buzz(void) {
    TEST_ASSERT_EQUAL_STRING("Buzz", main(5));
}