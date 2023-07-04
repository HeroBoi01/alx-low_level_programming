#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2, fib_sum;
int count;

printf("%lu, %lu", fib1, fib2);  /* Print the first two numbers */

for (count = 2; count < 98; count++)
{
fib_sum = fib1 + fib2;
printf(", %lu", fib_sum);

/* Update fib1 and fib2 */
fib1 = fib2;
fib2 = fib_sum;
}

printf("\n");  /* Print a new line at the end */
return (0);
}
