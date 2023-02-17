#include <stdio.h>
/**
 * main - A program that prints single digits from 0
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int m;

	m = '0';
	while (m <= '9')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
