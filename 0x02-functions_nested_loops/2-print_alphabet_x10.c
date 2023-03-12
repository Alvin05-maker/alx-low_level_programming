#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -prints alphabet in lowercase 10 times
 * @c: lowercase alphabets to be printed
 * @i: the number of times that c should be printed
 * Return: return c
 */

void print_alphabet_x10(void)
{
    char c;
    int i;

    for (i = 1; i <= 10; i++)
    {
            for (c = 'a'; c <= 'z'; c++)
            {
                    putchar(c);
            }
            putchar('\n');
    }
}
