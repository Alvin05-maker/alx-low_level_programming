#include <stdio.h>
/**
 * main - Entry point
 * description : 'The program description'
 * return: 0 (Success)
 */
int main(void)
{
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of float: %ld byte(s)\n", (unsigned long)sizeof(float));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	return (0);
	}
