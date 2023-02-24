#include <stdio.h>
#include <unistd.h>
/**
 * main - fizbuzz test
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 != 0))
		{
			printf("Fizz");
			putchar(' ');
		}
		else if ((n % 5 == 0) && (n % 3 != 0))
		{
			printf("Buzz");
			putchar(' ');
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else
		{
			printf("%d", n);
			putchar(' ');
		}
	}
	return (0);
}
