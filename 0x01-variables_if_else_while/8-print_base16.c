#include <stdio.h>
/**
 * main - A program that prints hexadecimal
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int a;
	char b;

	a = '0';
	b = 'a';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
