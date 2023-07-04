#include "main.h"

/**
 * print_fibonacci - Prints the Fibonacci sequence
 */
void print_fibonacci(void)
{
    int i;
    unsigned long int num1 = 1, num2 = 2, fib;

    printf("%lu, %lu, ", num1, num2);

    for (i = 0; i < 48; i++)
    {
        fib = num1 + num2;
        printf("%lu", fib);

        if (i != 47)
            printf(", ");

        num1 = num2;
        num2 = fib;
    }

    printf("\n");
}
