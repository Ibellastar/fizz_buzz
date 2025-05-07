#include <stdio.h>
#include <stdlib.h>
#include "unity.h"

// #define UNITY_INCLUDE_PRINT_FORMATTED

void setUp(void)
{
}

void tearDown(void)
{
}

void test_seventeen(void) {
    // read expected and read actual and use a string comparison 
    FILE *read_file = fopen("../test/expected_output_seventeen.txt", "r");
    TEST_ASSERT_NOT_NULL(read_file);

    char expected[256];
    size_t bytes_read = fread(expected, 1, sizeof(expected) - 1, read_file);
    expected[bytes_read] = '\0';
    fclose(read_file);

    // Read file content
    FILE *actual_file = fopen("../test_seventeen_output.txt", "r");
    TEST_ASSERT_NOT_NULL(actual_file);

    char actual_buffer[256];
    size_t actual_bytes_read = fread(actual_buffer, 1, sizeof(actual_buffer) - 1, actual_file);
    actual_buffer[actual_bytes_read] = '\0';
    fclose(actual_file);

    printf("\nExpected output:\n%s\n", expected);
    printf("\nActual output:\n%s\n", actual_buffer);

    // Compare file content to expected string
    TEST_ASSERT_EQUAL_STRING(expected, actual_buffer);
}