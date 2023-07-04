#include "main.h"

void print_sum_of_multiples(void)
{
    int sum = 0;
    int i;

    for (i = 0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);
}
