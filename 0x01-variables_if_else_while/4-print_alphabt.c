#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase and uppercase
 *
 * Return: return 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z' && c != ('q' || 'e'))
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
