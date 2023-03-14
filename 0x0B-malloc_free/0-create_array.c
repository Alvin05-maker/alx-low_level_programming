#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array initialized by a specific character
 * @size: the size of array
 * @c: character to assign
 * Return: return pointer to string.NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
