#include "main.h"

/**
 * get_endianness - checks for endianness of a machine
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *n = (char *) &e;

	return (*n);
}
