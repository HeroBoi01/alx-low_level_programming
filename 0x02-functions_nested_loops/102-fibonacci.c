#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
    int first = 1;
    int second = 2;
    int next;
    int i;

    printf("%d, %d", first, second);

    for (i = 3; i <= n; i++)
    {
        next = first + second;
        printf(", %d", next);

        first = second;
        second = next;
    }

    printf("\n");
}
