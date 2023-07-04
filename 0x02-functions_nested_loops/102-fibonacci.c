#include <stdio.h>

void print_fibonacci(int n)
{
    int first = 1;
    int second = 2;
    int next;

    printf("%d, %d", first, second);

    for (int i = 3; i <= n; i++)
    {
        next = first + second;
        printf(", %d", next);

        first = second;
        second = next;
    }

    printf("\n");
}
