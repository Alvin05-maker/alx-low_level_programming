#include <stdio.h>
#include <unistd.h>
/**
 * print_line - prints line
 * @n - number of times the charcter '-' should be printed
 * return: returns line
 */
void print_line(int n)
{
	int nCopy = n;

	while (nCopy > 0)
	{
		putchar('-');
		nCopy--;
	}
	else
	{
	       return (\n);
	}
}
