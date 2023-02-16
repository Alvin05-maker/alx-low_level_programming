#include <stdio.h>
/**
 * main - Entry point
 * description : 'The program description'
 * return: 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	float c;

	printf("The size of int is : %ld byte(s)\n",(unsigned long)sizeof(a));
	printf("The size of char is : %ld byte(s)",(unsigned long)sizeof(b));
	printf("The size of float is : %ld byte(s)",(unsigned long)sizeof(c));
	return (0);
	}
