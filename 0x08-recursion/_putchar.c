#include "main.h"
#include <unistd.h>
/**
 * main - writes the character c to the standard output
 * @c - The character to print
 *
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
