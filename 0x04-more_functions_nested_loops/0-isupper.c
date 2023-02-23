#include <stdio.h>
#include <unistd.h>
/**
 * _isupper - checks for uppercase characters
 *
 * Return: return 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
