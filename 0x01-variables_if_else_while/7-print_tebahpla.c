#include <stdio.h>
/**
 * main - A program that print lowercase alphabets in reverse
 *
 * Return: return 0 (success)
 */
int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}


