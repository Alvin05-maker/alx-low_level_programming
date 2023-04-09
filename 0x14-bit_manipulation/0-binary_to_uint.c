#include "main.h"
/**
 * power_of_2 - calculates the power of a number to the base of 2;
 * @q: the power to raise to
 * Return: returns the power of a number to base 2;
 */
unsigned int power_of_2(unsigned int q)
{
	return (1 << q);
}
/**
 * binary_to_uint - converts a binary string  to an unsigned int value
 * @b:pointer to the  binary input string
 *
 * Return: the unsigned int value or 0 if
 * there is one or more chars in the string b that is not 0 or 1 or
 * if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int power;
	unsigned int value;
	unsigned int sum;
	const char *p;

	p = b;
	while (*b != '\0')
	{
		b++;
	}
	b--;
	power = 0;
	sum = 0;

	while (b >= p)
	{
		if ((*b != '0') && (*b != '1'))
			return (0);
		i = *b - '0';
		value = i * power_of_2(power);
		sum += value;
		b--;
		power++;
	}
	return (sum);
}
