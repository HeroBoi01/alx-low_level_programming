#include <stdio.h>
#define MAX_DIGITS 1000
/**
* main - Finds and prints the first 98 Fibonacci numbers.
*
* Return: 0 on success
*/
int main(void)
{
int i, j;
int fib1[MAX_DIGITS] = {0}, fib2[MAX_DIGITS] = {0}, fib_sum[MAX_DIGITS] = {0};
int carry = 0;
fib1[MAX_DIGITS - 1] = 1;
fib2[MAX_DIGITS - 1] = 2;
printf("%d, %d", fib1[MAX_DIGITS - 1], fib2[MAX_DIGITS - 1]);
for (i = 2; i < 98; i++)
{
for (j = MAX_DIGITS - 1; j >= 0; j--)
{
fib_sum[j] = fib1[j] + fib2[j] + carry;
carry = fib_sum[j] / 10;
fib_sum[j] %= 10;
}
printf(", ");
/* Print the calculated Fibonacci number */
for (j = 0; j < MAX_DIGITS; j++)
{
/* Skip leading zeros until the first non-zero digit is encountered */
if (fib_sum[j] != 0)
{
/* Print the remaining digits */
while (j < MAX_DIGITS)
{
printf("%d", fib_sum[j]);
j++;
}
break;
}
}
/* Update fib1 and fib2 */
for (j = 0; j < MAX_DIGITS; j++)
{
fib1[j] = fib2[j];
fib2[j] = fib_sum[j];
}
}
printf("\n"); /* Print a new line at the end */
return (0);
}
