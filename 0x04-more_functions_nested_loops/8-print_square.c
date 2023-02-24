#include <stdio.h>
#include <unistd.h>
/**
 * print_square - prints square
 * @size: the number of times the character '#' should be printed
 * return: returns....
 */
void print_square(int size)
{
	int nCopy = size;

	while (nCopy > 0)
	{
		putchar('#');
		nCopy--;
	}
	else
	{
		putchar('\n');
	}
}
