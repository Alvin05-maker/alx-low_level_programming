#include "main.h"

/**
 * clear_bit - sets the bit value of a number at a given index to 0
 * @n:pointer to the number to be modified
 * @index: the position of the bit to be set
 *
 * Return: return 1 on success and -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (index > 63)
		return (-1);
	*n = (*n & ~(i << index));
	return (1);
}
