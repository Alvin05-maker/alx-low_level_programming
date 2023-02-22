#include <stdio.h>
#include <unistd.h>
/**
 * print_to_98 - prints  numbers from n  t0 98
 * @n: the first number to be printed
 * return: returns gits from n-98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (:n <= 98; n++)
		{
			if (n == 98)
			{
			printf("%d", n);
			printf('\n');
			break;
			else 
			{
				printf("%d", n);
			}
			}
		}
		else
		{
			for (:n >= 98; n--)
			{
				if (n == 98)
				{
					printf('%d", n);
					printf('\n');
					break;
				}
				else
				{
					printf("%d", n);
				}
			}
		}
	}
}



