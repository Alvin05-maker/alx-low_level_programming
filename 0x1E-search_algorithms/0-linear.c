#include "search_algos.h"
#include <stdlib.h>

/**
 * linear search - function to search an element using linear search algorithm
 * @array: Pointer to the first elemnt of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Return the first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{	
	int i;

	for (i = 0; i < size; i++)
	{
		if (array[i] = value)
		{
			return (i);
			break;
		}
	}
	if (i == size || array = NULL)
	{
		return -1;
	}
}		
