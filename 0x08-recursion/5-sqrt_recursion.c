#include "main.h"
/**
* sqrt_helper - Helper function to calculate the square root recursively
* @n: The number to calculate the square root of
* @i: The current value to check for square root
*
* Return: The sqrt rt of the number or -1 if it doesn't have a natural sqrt rt
*/
int sqrt_helper(int n, int i)
{
if (i * i == n)  /* Base case: found square root */
return (i);
if (i * i > n)  /* Base case: no natural square root */
return (-1);
return (sqrt_helper(n, i + 1));  /* Recursive call to check the next value */
}
/**
* _sqrt_recursion - Calculates the natural square root of a number
* @n: The number to calculate the square root of
*
* Return: The sqrt rt of the number or -1 if it doesn't have a natural sqrt rt
*/
int _sqrt_recursion(int n)
{
if (n < 0)  /* Error case: negative number */
return (-1);
return (sqrt_helper(n, 0));
}