#include "main.h"

/**
* is_prime_helper - Helper function to check if a number is prime recursively
* @n: The number to check
* @i: The current divisor to check
*
* Return: 1 if the number is prime, 0 otherwise
*/
int is_prime_helper(int n, int i)
{
if (n < 2 || n % i == 0)  /* Base cases: not prime */
return (0);

if (i * i > n)  /* Base case: prime */
return (1);

return (is_prime_helper(n, i + 1));  /* Recursive call to check next divisor */
}
/**
* is_prime_number - Checks if a number is prime
* @n: The number to check
*
* Return: 1 if the number is prime, 0 otherwise
*/
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
