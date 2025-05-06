# Class Assignment: Fizz Buzz
## Introduction

In this exercise you will create a function called **void fizz_buzz(int number)** that takes in integers and prints Fizz, Buzz, or Fizzbuzz based on the number inputed.

For multiples of 3, print "Fizz" instead of the number. For multiples of 5, print "Buzz". For numbers which are multiples of both 3 and 5, print "FizzBuzz".

### Starter Files

The starter files for this exercise are located in the `src` directory. Implement the **void fizz_buzz(int number)** function in ths following files:

1. `fizz_buzz.c`

### Run Checks

To check your work, run the following command:

```bash
$ make all -C .github/checker
```

This will run the tests and output the results.

### Output

If all checks pass, you will see the following output:

```bash
Ok:                 4
Expected Fail:      0
Fail:               0
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

If there are failing checks you will see summary of the failing tests:

```
Summary of Failures:

1/4 Prints numbers          FAIL            0.14s   exit status 2
2/4 Prints Fizz             FAIL            0.25s   exit status 2
3/4 Prints Buzz             FAIL            0.35s   exit status 2
4/4 Prints FizzBuzz         FAIL            0.46s   exit status 2

Ok:                 0
Expected Fail:      0
Fail:               4
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

In order to complete the exercise all tests must pass.
