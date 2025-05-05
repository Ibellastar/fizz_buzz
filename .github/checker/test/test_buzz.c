#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_buzz(void) {
    
    TEST_ASSERT_EQUAL_STRING("1\n2\nFizz\n4\nBuzz\n", fizz_buzz(5));
}