#include "main.h"

/**
 * set_bit -sets the bit of  number at a given index to 1
 * @n: pointer the number to be checked
 * @index: the position of the bit
 *
 * Return: 1 on success or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n | 1 << index);
	return (1);
}
