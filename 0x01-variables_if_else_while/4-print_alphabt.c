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
	while (c <= 'z')
		if ((c != 'q' && c != 'e') && c <= 'z')
		{
		putchar(c);
		c++;
		}
	putchar('\n');
	return (0);
}
