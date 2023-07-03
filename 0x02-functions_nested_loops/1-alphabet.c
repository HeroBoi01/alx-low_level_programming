#include "main.h"

/* Declaration of _putchar function */
int _putchar(char c);

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
    int i;

    for (i = 97; i <= 122; i++)
    {
        _putchar((char)i);
    }
    _putchar('\n');
}
