#include <stdio.h>

/**
* print_fibonacci - Prints Fibonacci numbers up to 98 terms
*/
void print_fibonacci(void)
{
int n = 98;       /* Number of Fibonacci numbers to print */
int first = 1;    /* First Fibonacci number */
int second = 2;   /* Second Fibonacci number */
int i;

printf("%d, %d", first, second);  /* Print the first two Fibonacci numbers */

for (i = 3; i <= n; i++)
{
int next = first + second;
printf(", %d", next);
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
