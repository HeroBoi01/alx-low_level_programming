#include <stdio.h>

/**
* print_fibonacci - Prints Fibonacci numbers up to 98 terms
*/
void print_fibonacci(void)
{
unsigned long n = 98;       /* Number of Fibonacci numbers to print */
unsigned long first = 1;    /* First Fibonacci number */
unsigned long second = 2;   /* Second Fibonacci number */
unsigned long i;

printf("%lu, %lu", first, second);  /* Print the first two Fibonacci numbers */

for (i = 3; i <= n; i++)
{
unsigned long next = first + second;
printf(", %lu", next);
first = second;
second = next;
}

printf("\n");
}

/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
print_fibonacci();

return (0);
}
