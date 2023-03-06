#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: the charcter to print
 *
 * Return: on success 1
 * On error -1 is set ,and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
