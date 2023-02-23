#include <stdio.h>
#include <unistd.h>
/**
 * print_numbers - prints  numbers from 0 to 9
 *
 * Return: return i
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
}
