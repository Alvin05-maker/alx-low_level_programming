#include "main.h"

/**
 * print_binary - prints the binary of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int curr_num;

	for (j = 63; j >= 0; j--)
	{
		curr_num = n >> j;

		if (curr_num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
