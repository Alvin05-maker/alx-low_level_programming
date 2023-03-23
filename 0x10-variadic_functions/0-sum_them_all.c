#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds all the arguments passed to the function
 * @...: A variable number of paramters to calculate the sum of
 *
 * @n: the number of arguments passed to the function
 * Return: the sum of the arguments passed to the function
 * return 0 if no arguments are passed to the function
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(add, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(add, int);
		}
	va_end(add);
		return (sum);
}
