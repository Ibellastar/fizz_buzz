#include <stdio.h>
#include <stdlib.h>
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    // read expected and read actual and use a string comparison 
    FILE *expected_file = fopen("../tests/test_1/expected_output_1.txt", "r");
    TEST_ASSERT_NOT_NULL(expected_file);

    char expected_buffer[256];
    size_t expected_bytes_read = fread(expected_buffer, 1, sizeof(expected_buffer) - 1, expected_file);
    expected_buffer[expected_bytes_read] = '\0';
    fclose(expected_file);

    // Read file content
    FILE *actual_file = fopen("actual_output_1.txt", "r");
    TEST_ASSERT_NOT_NULL(actual_file);

    char actual_buffer[256];
    size_t actual_bytes_read = fread(actual_buffer, 1, sizeof(actual_buffer) - 1, actual_file);
    actual_buffer[actual_bytes_read] = '\0';
    fclose(actual_file);

    printf("\nExpected output:\n%s\n", expected_buffer);
    printf("\nActual output:\n%s\n", actual_buffer);

    // Compare file content to expected string
    TEST_ASSERT_EQUAL_STRING(expected_buffer, actual_buffer);
}