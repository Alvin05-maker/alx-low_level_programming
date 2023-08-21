#include <stdio.h>
#include <unistd.h>
/**
 * _isdigit - checks for digits
 *
 * @c: character to be checked
 * Return: return 1 if a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
