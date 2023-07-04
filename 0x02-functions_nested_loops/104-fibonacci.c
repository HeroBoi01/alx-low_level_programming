#include <stdio.h>

/**
* print_fibonacci - Prints Fibonacci numbers up to 98 terms
*/
void print_fibonacci(void)
{
unsigned long long int n = 98;       /* Number of Fibonacci numbers to print */
unsigned long long int first = 1;    /* First Fibonacci number */
unsigned long long int second = 2;   /* Second Fibonacci number */
unsigned long long int i;

printf("%llu, %llu", first, second);  /* Print the first two Fibonacci numbers */

for (i = 3; i <= n; i++)
{
unsigned long long int next = first + second;
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
