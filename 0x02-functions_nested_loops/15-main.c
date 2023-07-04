#include <stdio.h>
#include "main.h"

int main(void)
{
    unsigned long fib1 = 1, fib2 = 2, fib_sum, sum = 0;

    while (fib1 <= 4000000)
    {
        if (fib1 % 2 == 0)
            sum += fib1;

        fib_sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_sum;
    }

    printf("%lu\n", sum);
    return 0;
}
