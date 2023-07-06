#include "main.h"

/**
 * get_bit - return the value of the bit of a number at a particular index
 * @n: the number to be checked
 * @index: the index of the bit to be checked
 *
 * Return: return the value of the bit at index and -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value_of_bit;
	unsigned int i = index;

	if (i > 63)
		return (-1);
	value_of_bit = (n >> i) & 1;
	return (value_of_bit);
}
