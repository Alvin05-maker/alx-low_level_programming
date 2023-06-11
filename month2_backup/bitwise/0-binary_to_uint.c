#include "main.h"
/**
 * binary_to_uint -converts a binary string to an unsigned integer
 * @b:the binary input string
 *
 * Return:return the decimal equivalent of the  binary string
 * Or 0 if there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j;
	unsigned int pow;
	unsigned int val;
	unsigned int sum;
	const char *p;

	p = b;
	while (*b != '\0')
	{
		b++;
	}
	b--;
	pow = 0;
	sum = 0;

	while (b >= p)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		j = *b - '0';
		val = j * (1 << pow);
		sum += val;
		b--;
		pow++;
	}
	return (sum);
}
