#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints whether a number is positive or negative
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is  positive\n");
	}
	if (n == 0)
	{
		printf("n is zero\n");
	}
	if (n < 0)
	{
		printf("n is negative\n");
	}
	return (0);
}
