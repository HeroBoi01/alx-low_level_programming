#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers.
 * @n: The number of Fibonacci numbers to print.
 */
void print_fibonacci(int n)
{
	int first = 1, second = 2, next, i;

	printf("%d, %d", first, second); // Print the first two numbers

	for (i = 2; i < n; i++)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	print_fibonacci(50);
	return 0;
}
