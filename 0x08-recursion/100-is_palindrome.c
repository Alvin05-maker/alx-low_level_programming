#include "main.h"

/**
 * is_palindrome - determines whether a string is empty or not
 *
 * @s - string to be checked
 *
 * Return: 1 if it is,0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of the string
 * @s: string to determine the lenth of
 *
 * Return:length of the string
 */
int _strlen-recursion(s + 1)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion (s + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to be checked
 * @i: iterator
 * @len: lenth of the string
 *
 * Return: 1 if palindrome,0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}	
