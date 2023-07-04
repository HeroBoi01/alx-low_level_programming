#include "main.h"

/**
 * print_triangle - Prints a triangle using the '#' character
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
int row, column;

if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 0; row < size; row++)
{
for (column = 0; column < size; column++)
{
if (column < size - row - 1)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
