#include "search_algos.h"
#include <stdlib.h>

/**
 * linear search - function to search an element using linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Return the first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int i;
	
	for (i = 0; i < (int)size; i++)
	{
		if (array == NULL || i == (int)size)
		{
			return (-1);
		}
		else if (array[i] == value)
		{
			return (i);
			break;
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
