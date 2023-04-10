#include "main.h"

/**
 * flip_bits - counts the number of bits to modify
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to modify
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, counter = 0;
	unsigned long int _curr;
	unsigned long int _excl = n ^ m;

	while (i >= 0)
	{
		i--;
		_curr = _excl >> i;
		if (_curr & 1)
			counter++;
	}
	return (counter);
}
