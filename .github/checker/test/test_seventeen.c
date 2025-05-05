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
    FILE *write_file = freopen("student_output_1.txt", "w", stdout);
    TEST_ASSERT_NOT_NULL(write_file);

    // Call fizz_buzz with 17
    fizz_buzz(17);

    // Restore stdout
    fclose(write_file);
    freopen("/dev/tty", "w", stdout);

    // Read file content
    FILE *read_file = fopen("student_output_1.txt", "r");
    TEST_ASSERT_NOT_NULL(read_file);

    char buffer[256];
    size_t bytes_read = fread(buffer, 1, sizeof(buffer) - 1, read_file);
    buffer[bytes_read] = '\0';
    fclose(read_file);

    // Read expected output file
    FILE *expected_output_1 = fopen("../.github/checker/test/expected_output_seventeen.txt", "r");
    TEST_ASSERT_NOT_NULL(expected_output_1);

    char expected_output_buffer[256];
    size_t bytes_read_2 = fread(expected_output_buffer, 1, sizeof(expected_output_buffer) - 1, expected_output_1);
    expected_output_buffer[bytes_read_2] = '\0';
    fclose(expected_output_1);

    // Compare file content to expected string
    // // TEST_ASSERT_EQUAL_STRING("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\nBuzz\n11\nFizz\n13\n14\nFizzBuzz\n16\n17\n", buffer);
    TEST_ASSERT_EQUAL_STRING(expected_output_buffer, buffer);
}