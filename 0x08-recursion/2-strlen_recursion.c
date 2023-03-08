#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to determine the length
 *
 * Return: the lenth of the string
 */
int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}
	return (longi);
}
