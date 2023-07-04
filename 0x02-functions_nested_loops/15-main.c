#include "main.h"

int main(void)
{
    unsigned long int limit = 4000000;
    unsigned long int sum = sum_even_fibonacci(limit);

    printf("%lu\n", sum);

    return 0;
}
