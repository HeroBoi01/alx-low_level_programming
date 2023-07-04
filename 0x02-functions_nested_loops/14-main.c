#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, fib_next;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		fib_next = fib1 + fib2;
		printf("%lu", fib_next);

		if (i < 50)
			printf(", ");
		else
			printf("\n");

		fib1 = fib2;
		fib2 = fib_next;
	}

	return (0);
}
