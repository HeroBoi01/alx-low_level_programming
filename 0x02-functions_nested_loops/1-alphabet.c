#include <stdio.h>

void print_alphabet(void);  /* Function prototype */

int main(void)
{
    print_alphabet();
    return 0;
}

void print_alphabet(void)  /* Function definition */
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');
}
