#include <stdio.h>
#include <gmp.h>

/**
 * print_fibonacci - Prints Fibonacci numbers up to the specified count
 * @count: The number of Fibonacci numbers to print
 */
void print_fibonacci(int count)
{
    mpz_t first;          /* First Fibonacci number */
    mpz_t second;         /* Second Fibonacci number */
    mpz_t next;
    int i;

    mpz_init_set_ui(first, 1);
    mpz_init_set_ui(second, 2);

    gmp_printf("%Zd, %Zd", first, second); /* Print the first two Fibonacci numbers */

    mpz_init(next);

    for (i = 3; i <= count; i++)
    {
        mpz_add(next, first, second);
        gmp_printf(", %Zd", next);
        mpz_set(first, second);
        mpz_set(second, next);
    }

    mpz_clear(first);
    mpz_clear(second);
    mpz_clear(next);

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
