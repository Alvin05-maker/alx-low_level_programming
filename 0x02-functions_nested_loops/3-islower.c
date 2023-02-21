#include <stdio.h>
#include <unistd.h>
/**
 * _islower(int c) - checks for lowercase characters
 *
 * Return: return 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
