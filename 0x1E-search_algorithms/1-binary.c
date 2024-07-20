#include "search_algos.h"

/**
 * binary_search - search for value in an array
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 *
 * Return: int - index of value if found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t upper_bound, mid_idx, lower_bound = 0;

	if (array == NULL)
		return (-1);

	upper_bound = size - 1;
	while (lower_bound <= upper_bound)
	{
		print_array(array, lower_bound, upper_bound);
		mid_idx = lower_bound + (upper_bound - lower_bound) / 2;

		if (array[mid_idx] == value)
			return (mid_idx);

		if (array[mid_idx] > value)
			upper_bound = mid_idx - 1;
		else
			lower_bound = mid_idx + 1;

	}
	return (-1);
}
/**
 * print_array - print an array of integers
 * @array: array of integers
 * @low: index to start print
 * @high: index to stop print
 *
 * Return: nothing
 */
void print_array(int *array, size_t low, size_t high)
{

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		printf("%d", array[low]);
		if (low < high)
			printf(", ");
	}
	printf("\n");
}
