#include <stdio.h>
#include <inttypes.h>

/**
 * print_fibonacci - Prints Fibonacci numbers up to the specified count
 * @count: The number of Fibonacci numbers to print
 */
void print_fibonacci(int count)
{
    uint64_t first = 1;          /* First Fibonacci number */
    uint64_t second = 2;         /* Second Fibonacci number */
    uint64_t next;
    int i;

    printf("%" PRIu64 ", %" PRIu64, first, second); /* Print the first two Fibonacci numbers */

    for (i = 3; i <= count; i++)
    {
        next = first + second;
        printf(", %" PRIu64, next);
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
    print_fibonacci(100);

    return 0;
}
