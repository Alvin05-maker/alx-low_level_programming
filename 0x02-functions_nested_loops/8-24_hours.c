#include <stdio.h>
#include <unistd.h>
/**
 * jack_bauer - prints every minute of the day
 * Return: ......
 */
void jack_bauer(void)
{
	int p, q, r, s;

	for (p = 0; p <= 2; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			if ((p <= 0 && p <= 9) || (q <= 0 && q <= 3))
			{
				for (r = 0; r <= 5; r++)
				{
					for (s = 0; s <= 9; s++)
					{
						putchar(p + '0');
						putchar(q + '0');
						putchar(58);
						putchar(r + '0');
						putchar(s + '0');
						putchar('\n');
					}
				}
			}
		}
	}
}
