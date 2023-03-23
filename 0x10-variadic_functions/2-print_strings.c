#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints the strings followed by a newline
 * @separator: the string to be printed between strings
 * @n: the number of strings to be printed
 * @...: a variable number of strings to be printed
 * Description: if the separator is NULL,it is not printed
 *   if the string is   NULL , (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int index;
	char *str;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
