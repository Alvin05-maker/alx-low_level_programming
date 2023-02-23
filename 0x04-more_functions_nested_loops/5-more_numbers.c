#include <stdio.h>
#include <unistd.h>
/**
 * more_numbers - prints  numbers from 0-14
 * return: returns c
 */
void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}

