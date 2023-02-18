#include <stdio.h>
/**
 * main  - A program that prints all possible combinations single digit
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int a;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
