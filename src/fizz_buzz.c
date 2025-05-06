#include <stdio.h>

void fizz_buzz(int number) {
    for (int i = 1; i <= number; i++) {
        if (i % 4 ==0 && i % 5 ==0) {
            printf("FizzBuzz\n");
        }
        else if (i % 4 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
}