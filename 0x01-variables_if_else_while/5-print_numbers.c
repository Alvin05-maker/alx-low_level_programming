#include <stdio.h>
/**
 * main - A program that prints single digit numbers from 0
 *
 * Return: retuen 0 (success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
