#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * Return: return void
 */
void print_alphabet_x10(void)
{
char c;
int i;

while (i <= 9)
{
for (c = 'a' ; c <= 'z' ; c++)
{
putchar(c);
}
putchar('\n');
i++;
}
}
