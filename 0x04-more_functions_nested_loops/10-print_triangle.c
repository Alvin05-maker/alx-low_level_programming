#include <stdio.h>
#include <unistd.h>
/**
 * print_triangle - print triangle
 * @size: number of trimes the charcter '#' should be printed
 * return: returns (\n)
 */
void print_triangle(int size)
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
