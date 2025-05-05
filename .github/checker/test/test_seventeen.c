#include <stdio.h>
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_seventeen(void) {
    // Read file content
    FILE *read_file = fopen("output_seventeen.txt", "r");
    TEST_ASSERT_NOT_NULL(read_file);

    char buffer[256];
    fgets(buffer, sizeof(buffer), read_file);
    fclose(read_file);

    // Compare file content to expected string
    TEST_ASSERT_EQUAL_STRING("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\nBuzz\n11\nFizz\n13\n14\nFizzBuzz\n16\n17\n", buffer);
}