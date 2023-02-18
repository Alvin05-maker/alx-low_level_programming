#include <stdio.h>
/**
 * main  - A program that prints all possible combinations single digits
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int m, n;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			if (m != n)
			{
				putchar(m);
				putchar(n);
				if (m == '8' && n == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
