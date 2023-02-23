#include <stdio.h>
#include <unistd.h>
/**
 * print_most_numbers - prints  numbers from 0 to 9 except 2 and 4
 * description -  prints numbers except 2 and 4
 * Return: return i
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 || i != 4)
		{
			putchar(i);
		}
	}
	putchar('\n');
}
