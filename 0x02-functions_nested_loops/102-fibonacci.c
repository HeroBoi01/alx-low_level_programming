#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
int i;
unsigned long fib1 = 1, fib2 = 2, fib_sum;

printf("%lu, %lu", fib1, fib2);  /* Print the first two numbers */

for (i = 2; i < 50; i++)
{
fib_sum = fib1 + fib2;
printf(", %lu", fib_sum);
fib1 = fib2;
fib2 = fib_sum;
}

printf("\n");  /* Print a new line at the end */
return (0);
}
