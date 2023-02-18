#include <stdio.h>
/**
 * main - A program that prints combination of 3 single digits
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int m, n, q;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			for (q = n + 1; q <= '9'; q++)
			{
				if ((n != m) != q)
				{
					putchar(m);
					putchar(n);
					putchar(q);
					if (m == '7' && n == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
