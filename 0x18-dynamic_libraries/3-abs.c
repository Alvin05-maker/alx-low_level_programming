#include <stdio.h>
#include <unistd.h>
/**
 *  _abs - prints absolute value of a number
 * @c:  the number to be computed
 * Return: returns absol_value if @c is less than 0 else returns c
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absol_value;

		absol_value = c * -1;
		return (absol_value);
	}
	return (c);
}
