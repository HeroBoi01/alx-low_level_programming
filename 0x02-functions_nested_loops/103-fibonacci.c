#include "main.h"

/**
 * sum_even_fibonacci - Calculates the sum of even-valued terms
 *                      in the Fibonacci sequence
 *
 * @limit: The maximum limit for Fibonacci numbers
 *
 * Return: The sum of even-valued terms
 */
unsigned long int sum_even_fibonacci(unsigned long int limit)
{
    unsigned long int sum = 0;
    unsigned long int num1 = 1, num2 = 2, fib;

    while (num1 <= limit)
    {
        if (num1 % 2 == 0)
            sum += num1;

        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
    }

    return sum;
}
