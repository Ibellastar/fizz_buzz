#include <stdio.h>
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_seventeen(void) {
    // Redirect stdout to a file
    FILE *write_file = freopen("output_seventeen.txt", "w", stdout);
    TEST_ASSERT_NOT_NULL(write_file);

    // Call fizz_buzz with 17
    fizz_buzz(17);

    // Restore stdout
    freopen("/dev/tty", "w", stdout);

    // Read file content
    FILE *read_file = fopen("output_seventeen.txt", "r");
    TEST_ASSERT_NOT_NULL(read_file);

    char buffer[256];
    size_t bytes_read = fread(buffer, 1, sizeof(buffer) - 1, read_file);
    buffer[bytes_read] = '\0';
    fclose(read_file);

    // Compare file content to expected string
    TEST_ASSERT_EQUAL_STRING("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\nBuzz\n11\nFizz\n13\n14\nFizzBuzz\n16\n17\n", buffer);
}