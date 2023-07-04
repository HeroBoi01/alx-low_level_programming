#include <stdio.h>

/**
* print_fibonacci - Prints Fibonacci numbers up to 100 terms
*/
void print_fibonacci(void)
{
unsigned long long first = 1;  /* First Fibonacci number */
unsigned long long second = 2; /* Second Fibonacci number */
unsigned long long next;
int i;

printf("%llu, %llu", first, second); /* Print the first two Fibonacci numbers */

for (i = 3; i <= 100; i++)
{
next = first + second;
printf(", %llu", next);
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
